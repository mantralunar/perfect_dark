#ifndef _ULTRA64_PI_H_
#define _ULTRA64_PI_H_

/* Ultra64 Parallel Interface */

/* Types */

typedef struct
{
    u32 errStatus;
    void *dramAddr;
    void *C2Addr;
    u32 sectorSize;
    u32 C1ErrNum;
    u32 C1ErrSector[4];
} __OSBlockInfo;

typedef struct
{
    u32 cmdType;
    u16 transferMode;
    u16 blockNum;
    s32 sectorNum;
    u32 devAddr;
    u32 bmCtlShadow;
    u32 seqCtlShadow;
    __OSBlockInfo block[2];
} __OSTranxInfo;

typedef struct OSPiHandle_s
{
    struct OSPiHandle_s *next;
    u8 type;
    u8 latency;
    u8 pageSize;
    u8 relDuration;
    u8 pulse;
    u8 domain;
    u32 baseAddress;
    u32 speed;
    __OSTranxInfo transferInfo;
} OSPiHandle;

typedef struct
{
    u8 type;
    u32 address;
} OSPiInfo;

typedef struct
{
    u16 type;
    u8 pri;
    u8 status;
    OSMesgQueue *retQueue;
} OSIoMesgHdr;

typedef struct
{
    /*0x00*/ OSIoMesgHdr hdr;
    /*0x08*/ void *dramAddr;
    /*0x0C*/ u32 devAddr;
    /*0x10*/ u32 size;
    OSPiHandle *piHandle; //from the official definition
} OSIoMesg;

typedef struct {
	s32             active;		/* Status flag */
	OSThread	*thread;	/* Calling thread */
	OSMesgQueue  	*cmdQueue;	/* Command queue */
	OSMesgQueue  	*evtQueue;	/* Event queue */
	OSMesgQueue  	*acsQueue;	/* Access queue */
	/* Raw DMA routine */
	s32             (*dma)(s32, u32, void *, u32);
	s32             (*edma)(OSPiHandle *, s32, u32, void *, u32);
} OSDevMgr;

/* Definitions */

#define OS_READ 0  // device -> RDRAM
#define OS_WRITE 1 // device <- RDRAM

#define OS_MESG_PRI_NORMAL 0
#define OS_MESG_PRI_HIGH 1

#define WAIT_ON_IOBUSY(stat)                                \
    stat = IO_READ(PI_STATUS_REG);                          \
    while (stat & (PI_STATUS_IO_BUSY | PI_STATUS_DMA_BUSY)) \
        stat = IO_READ(PI_STATUS_REG);

/* Functions */

s32 osPiStartDma(OSIoMesg *mb, s32 priority, s32 direction,
                 u32 devAddr, void *vAddr, u32 nbytes, OSMesgQueue *mq);
void osCreatePiManager(OSPri pri, OSMesgQueue *cmdQ, OSMesg *cmdBuf,
                       s32 cmdMsgCnt);
OSMesgQueue *osPiGetCmdQueue(void);
s32 osPiWriteIo(u32 devAddr, u32 data);
s32 osPiReadIo(u32 devAddr, u32 *data);
s32 osPiRawStartDma(s32 direction, u32 devAddr, void *dramAddr, u32 size);
s32 osEPiRawStartDma(OSPiHandle *pihandle, s32 direction, u32 devAddr, void *dramAddr, u32 size);
void __osDevMgrMain(void *args);


#endif
