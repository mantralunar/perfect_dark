#ifndef _IN_GVARS_H
#define _IN_GVARS_H
#include <ultra64.h>
#include "types.h"

struct g_vars {
	// Known remaining member names based on debug strings:
	//g_Vars.PaksNeedsReInit
	//g_Vars.FourMeg2Player
	//g_Vars.playersperm[0]
	//g_Vars.playersperm[1]
	//g_Vars.PropState.propznum
	//g_Vars.PropState
	//g_Vars.antibodynum
	//g_Vars.antiheadnum

	/*000000*/ s32 diffframe60;
	/*000004*/ f32 diffframe60f;
	/*000008*/ s32 lvframe60;
	/*00000c*/ s32 lvframenum; // increments by 1 each frame when not paused
	/*000010*/ f32 diffframe60freal;
	/*000014*/ s32 lastframetime;
	/*000018*/ s32 thisframetime;
	/*00001c*/ s32 thisframeticks;
	/*000020*/ s32 lostframetime;
	/*000024*/ s32 lostframetime240;
	/*000028*/ u32 mininc60;
	/*00002c*/ s32 roomportalrecursionlimit;
	/*000030*/ s32 lvframe240;
	/*000034*/ s32 lvupdate240; // 0 = paused, 4 = slowmo, 8 = normal
	/*000038*/ s32 lvupdate240_60;
	/*00003c*/ s32 lvupdate240_60error;
	/*000040*/ s32 diffframe240;
	/*000044*/ f32 lvupdate240f;
	/*000048*/ f32 diffframe240f;
	/*00004c*/ f32 lvupdate240freal;
	/*000050*/ f32 lvupdate240frealprev;
	/*000054*/ s32 lastframe240;
	/*000058*/ s32 thisframe240;
	/*00005c*/ f32 diffframe240freal;
	/*000060*/ u32 unk000060;
	/*000064*/ struct player *players[4];
	/*000074*/ struct playerstats playerstats[4];
	/*000274*/ u32 playerorder[4];
	/*000284*/ struct player *currentplayer;
	/*000288*/ struct playerstats *currentplayerstats;
	/*00028c*/ s32 currentplayernum; // 0-3 - controller numbers I think
	/*000290*/ s32 currentplayerindex; // 0-3 - but 2 or 3 probably only used in combat simulator
	/*000294*/ s32 bondplayernum;
	/*000298*/ s32 coopplayernum;
	/*00029c*/ s32 antiplayernum;
	/*0002a0*/ struct player *bond; // Joanna
	/*0002a4*/ struct player *coop; // Co-op buddy when controlled by human
	/*0002a8*/ struct player *anti; // Counter-op
	/*0002ac*/ s32 tickmode;
	/*0002b0*/ s32 killcount;
	/*0002b4*/ u32 knockoutcount;
	/*0002b8*/ struct textoverride *textoverrides;
	/*0002bc*/ s32 roomcount;
	/*0002c0*/ u32 unk0002c0;
	/*0002c4*/ u32 unk0002c4;
	/*0002c8*/ u32 unk0002c8;
	/*0002cc*/ u32 unk0002cc;
	/*0002d0*/ u32 unk0002d0;
	/*0002d4*/ u32 unk0002d4;
	/*0002d8*/ u32 unk0002d8;
	/*0002dc*/ u32 unk0002dc;
	/*0002e0*/ u32 unk0002e0;
	/*0002e4*/ u32 unk0002e4;
	/*0002e8*/ u32 unk0002e8;
	/*0002ec*/ u32 unk0002ec;
	/*0002f0*/ u32 unk0002f0;
	/*0002f4*/ u32 unk0002f4;
	/*0002f8*/ u32 unk0002f8;
	/*0002fc*/ u32 unk0002fc;
	/*000300*/ u32 unk000300;
	/*000304*/ u32 unk000304;
	/*000308*/ u32 unk000308;
	/*00030c*/ u32 unk00030c;
	/*000310*/ u32 unk000310;
	/*000314*/ bool mplayerisrunning;     // combat sim with any number of players, coop with human buddy, and counter-op
	/*000318*/ bool normmplayerisrunning; // combat sim with any number of players
	/*00031c*/ s32 lvmpbotlevel;
	/*000320*/ s32 unk000320;
	/*000324*/ s32 unk000324;
	/*000328*/ bool bondcollisions;
	/*00032c*/ bool enableslopes;
	/*000330*/ u32 unk000330;
	/*000334*/ s32 maxprops;
	/*000338*/ struct prop *props; // pointer to array
	/*00033c*/ struct prop *list1head;
	/*000340*/ struct prop *list1tail; // next pointer points to list2head
	/*000344*/ struct prop *freeprops;
	/*000348*/ struct prop **tangibleprops;
	/*00034c*/ struct prop **unk00034c;
	/*000350*/ struct prop *unk000350;
	/*000354*/ struct prop *list2head; // prev pointer points to list1tail
	/*000358*/ u8 numpropstateindexes;
	/*000359*/ u8 nextpropstateindex;
	/*00035a*/ u8 unk00035a;
	/*00035b*/ u8 unk00035b;
	/*00035c*/ u16 unk00035c;
	/*00035e*/ u16 unk00035e;
	/*000360*/ struct propstate propstates[7];
	/*000424*/ struct chrdata *chrdata;
	/*000428*/ struct truckobj *truck;
	/*00042c*/ struct heliobj *heli;
	/*000430*/ struct chopperobj *hovercar;
	/*000434*/ u8 *ailist;
	/*000438*/ u32 aioffset;
	/*00043c*/ u32 unk00043c;
	/*000440*/ s32 antiheadnum;
	/*000444*/ s32 antibodynum;
	/*000448*/ s32 coopradaron;
	/*00044c*/ s32 antiradaron;
	/*000450*/ s32 pendingantiplayernum;
	/*000454*/ s32 coopfriendlyfire;
	/*000458*/ u32 unk000458;
	/*00045c*/ s32 speedpilltime;
	/*000460*/ s32 speedpillchange;
	/*000464*/ u32 speedpillwant;
	/*000468*/ bool speedpillon;
	/*00046c*/ s32 restartlevel;
	/*000470*/ u32 perfectbuddynum;
	/*000474*/ s32 numaibuddies;
	/*000478*/ u32 unk000478;
	/*00047c*/ u32 unk00047c;
	/*000480*/ u16 unk000480;
	/*000482*/ u16 unk000482;
	/*000484*/ s32 mphilltime;
	/*000488*/ u32 unk000488;
	/*00048c*/ u32 unk00048c;

	// 1 when entering game setup
	// 2 when entering combat simulator
	// 3 when entering Quick Go
	/*000490*/ s32 unk000490;

	/*000494*/ s8 unk000494[4];
	/*000498*/ s32 unk000498;
	/*00049c*/ s32 unk00049c;
	/*0004a0*/ s32 unk0004a0;
	/*0004a4*/ s32 mpquickteamnumsims;
	/*0004a8*/ s32 unk0004a8;
	/*0004ac*/ s8 mpplayerteams[4];
	/*0004b0*/ u32 mpquickteam;
	/*0004b4*/ s32 stagenum;
	/*0004b8*/ struct prop *aibuddies[4];
	/*0004c8*/ u32 dontplaynrg; // allow X music to be played (NRG = energy track)
	/*0004cc*/ s32 in_cutscene;
	/*0004d0*/ u8 paksconnected;
	/*0004d1*/ u8 unk0004d1;
	/*0004d2*/ s8 unk0004d2; // cutscene scene number (0, 1 or 2)
	/*0004d3*/ s8 unk0004d3;
	/*0004d4*/ s8 unk0004d4; // index into g_Cutscenes
	/*0004d5*/ s8 unk0004d5;
	/*0004d6*/ s8 unk0004d6;
	/*0004d7*/ s8 unk0004d7;
	/*0004d8*/ s32 unk0004d8;
	/*0004dc*/ u8 playertojoymap[4];
	/*0004e0*/ u8 unk0004e0;
	/*0004e1*/ u8 unk0004e1;
	/*0004e2*/ u8 unk0004e2;
	/*0004e3*/ u8 langfilteron;
	/*0004e4*/ u16 unk0004e4;
	/*0004e8*/ u32 unk0004e8;
	/*0004ec*/ u32 unk0004ec;
	/*0004f0*/ u32 unk0004f0;
	/*0004f4*/ u32 unk0004f4;
	/*0004f8*/ u32 unk0004f8;
	/*0004fc*/ u32 unk0004fc;
	/*0004e0*/ u32 unk000500;
	/*000504*/ u32 unk000504;
	/*000508*/ u32 unk000508;
	/*00050c*/ u32 unk00050c;
	/*000510*/ u32 unk000510;
	/*000514*/ u32 unk000514;
	/*000518*/ u32 unk000518;
	/*00051c*/ u32 unk00051c;
	/*000520*/ u32 unk000520;
	/*000524*/ u32 unk000524;
	/*000528*/ u32 unk000528;
	/*00052c*/ u32 unk00052c;
	/*000530*/ u32 unk000530;
	/*000534*/ u32 unk000534;
	/*000538*/ u32 unk000538;
	/*00053c*/ u32 unk00053c;
	/*000540*/ u32 unk000540;
	/*000544*/ u32 unk000544;
	/*000548*/ u32 unk000548;
	/*00054c*/ u32 unk00054c;
	/*000550*/ u32 unk000550;
	/*000554*/ u32 unk000554;
	/*000558*/ u32 unk000558;
	/*00055c*/ u32 unk00055c;
	/*000560*/ u32 unk000560;
	/*000564*/ u32 unk000564;
	/*000568*/ u32 unk000568;
	/*00056c*/ u32 unk00056c;
	/*000570*/ u32 unk000570;
	/*000574*/ u32 unk000574;
	/*000578*/ u32 unk000578;
	/*00057c*/ u32 unk00057c;
	/*000580*/ u32 unk000580;
	/*000584*/ u32 unk000584;
	/*000588*/ u32 unk000588;
	/*00058c*/ u32 unk00058c;
	/*000590*/ u32 unk000590;
	/*000594*/ u32 unk000594;
	/*000598*/ u32 unk000598;
	/*00059c*/ u32 unk00059c;
	/*0005a0*/ u32 unk0005a0;
	/*0005a4*/ u32 unk0005a4;
	/*0005a8*/ u32 unk0005a8;
	/*0005ac*/ u32 unk0005ac;
	/*0005b0*/ u32 unk0005b0;
	/*0005b4*/ u32 unk0005b4;
	/*0005b8*/ u32 unk0005b8;
	/*0005bc*/ u32 unk0005bc;
	/*0005c0*/ u32 unk0005c0;
	/*0005c4*/ u32 unk0005c4;
	/*0005c8*/ u32 unk0005c8;
	/*0005cc*/ u32 unk0005cc;
	/*0005d0*/ u32 unk0005d0;
	/*0005d4*/ u32 unk0005d4;
	/*0005d8*/ u32 unk0005d8;
	/*0005dc*/ u32 unk0005dc;
	/*0005e0*/ u32 unk0005e0;
	/*0005e4*/ u32 unk0005e4;
	/*0005e8*/ u32 unk0005e8;
	/*0005ec*/ u32 unk0005ec;
	/*0005f0*/ u32 unk0005f0;
	/*0005f4*/ u32 unk0005f4;
	/*0005f8*/ u32 unk0005f8;
	/*0005fc*/ u32 unk0005fc;
	/*000600*/ u32 unk000600;
	/*000604*/ u32 unk000604;
	/*000608*/ u32 unk000608;
	/*00060c*/ u32 unk00060c;
	/*000610*/ u32 unk000610;
	/*000614*/ u32 unk000614;
	/*000618*/ u32 unk000618;
	/*00061c*/ u32 unk00061c;
	/*000620*/ u32 unk000620;
	/*000624*/ u32 unk000624;
	/*000628*/ u32 unk000628;
	/*00062c*/ u32 unk00062c;
	/*000630*/ u32 unk000630;
	/*000634*/ u32 unk000634;
	/*000638*/ u32 unk000638;
	/*00063c*/ u32 unk00063c;
	/*000640*/ u32 unk000640;
	/*000644*/ u32 unk000644;
	/*000648*/ u32 unk000648;
	/*00064c*/ u32 unk00064c;
	/*000650*/ u32 unk000650;
	/*000654*/ u32 unk000654;
	/*000658*/ u32 unk000658;
	/*00065c*/ u32 unk00065c;
	/*000660*/ u32 unk000660;
	/*000664*/ u32 unk000664;
	/*000668*/ u32 unk000668;
	/*00066c*/ u32 unk00066c;
	/*000670*/ u32 unk000670;
	/*000674*/ u32 unk000674;
	/*000678*/ u32 unk000678;
	/*00067c*/ u32 unk00067c;
	/*000680*/ u32 unk000680;
	/*000684*/ u32 unk000684;
	/*000688*/ u32 unk000688;
	/*00068c*/ u32 unk00068c;
	/*000690*/ u32 unk000690;
	/*000694*/ u32 unk000694;
	/*000698*/ u32 unk000698;
	/*00069c*/ u32 unk00069c;
	/*0006a0*/ u32 unk0006a0;
	/*0006a4*/ u32 unk0006a4;
	/*0006a8*/ u32 unk0006a8;
	/*0006ac*/ u32 unk0006ac;
	/*0006b0*/ u32 unk0006b0;
	/*0006b4*/ u32 unk0006b4;
	/*0006b8*/ u32 unk0006b8;
	/*0006bc*/ u32 unk0006bc;
	/*0006c0*/ u32 unk0006c0;
	/*0006c4*/ u32 unk0006c4;
	/*0006c8*/ u32 unk0006c8;
	/*0006cc*/ u32 unk0006cc;
	/*0006d0*/ u32 unk0006d0;
	/*0006d4*/ u32 unk0006d4;
	/*0006d8*/ u32 unk0006d8;
	/*0006dc*/ u32 unk0006dc;
	/*0006e0*/ u32 unk0006e0;
	/*0006e4*/ u32 unk0006e4;
	/*0006e8*/ u32 unk0006e8;
	/*0006ec*/ u32 unk0006ec;
	/*0006f0*/ u32 unk0006f0;
	/*0006f4*/ u32 unk0006f4;
	/*0006f8*/ u32 unk0006f8;
	/*0006fc*/ u32 unk0006fc;
	/*000700*/ u32 unk000700;
	/*000704*/ u32 unk000704;
};

extern u32 var8008ae20;
extern struct g_vars g_Vars;

extern s32 g_NumTags;
extern struct tag **g_TagPtrs;

extern u32 var8008de38;
extern struct bootbufferthing g_BootBuffers[3];
extern s32 g_BootBufferIndex0;
extern s32 g_BootBufferIndex1;
extern s32 g_BootBufferIndex2;
extern u8 g_Is4Mb;
extern u32 var80090af4;
extern u32 var80090af8;
extern u32 var80090afc;
extern void *var8009cac0; // framebuffer?
extern void *var8009cac4; // framebuffer?

extern u32 var8008ae2c;
extern u32 var8008ae30;
extern u32 var8008ae38;
extern u32 var8008be38;
extern u32 var8008d238;
extern OSThread g_RmonThread;
extern OSThread g_IdleThread;
extern OSThread g_MainThread;
extern u32 var8008d900;
extern OSMesgQueue var8008db30;
extern OSMesg var8008db48;
extern OSMesgQueue *g_SchedCmdQ;
extern OSSched g_SchedThread;
extern OSScClient var8008dca8;
extern u32 g_OsMemSize;
extern OSViMode var8008dcc0[2];
extern OSViMode *var8008dd60[2];
extern OSViMode var8008dd68[2];
extern u32 var8008de08;
extern u32 var8008de0c;
extern u32 var8008de10;
extern OSTimer var8008de18;
extern u8 g_BootBufferDirtyIndexes[3];
extern OSMesg g_ResetMesg;
extern OSMesgQueue g_ResetMesgQueue;
extern OSThread g_ResetThread;
extern u32 g_ResetSp;
extern OSThread viThread;
extern u32 __viEventQueue;
extern u32 viEventBuf;
extern u32 viRetraceMsg;
extern u32 viCounterMsg;
extern u32 var800902a0;
extern u32 var80090318;
extern OSThread piThread;
extern u32 piEventQueue;
extern u32 piEventBuf;
extern u32 var800907f0;
extern u32 __osPfsPifRam;
extern u32 __osFinalRom;
extern u32 var80090a70;
extern u32 var80090ab0;
extern u32 var80090ad0;
extern u32 var80090ae8;
extern u32 var80090b00;
extern u32 var80090b10;
extern u32 var80090b14;
extern u32 var800914d8;
extern u32 var80091558;
extern u64 var80091568;
extern u64 var80091570;
extern u64 var80091578;
extern u64 var80091580;
extern u64 var80091588;
extern u64 var80091590;
extern AMAudioMgr g_AudioManager;
extern void *g_AudioSp;
extern OSScTask *g_AmgrCurrentCmdList;
extern u32 var80091900;
extern u32 var80091910;
extern u32 var80091924;
extern u32 var80091f50;
extern u32 var800926d0;
extern u32 var800926e8;
extern u32 var80092828;
extern u32 var80092830;
extern u32 var80092870;
extern u32 var80092874;
extern OSThread g_FaultThread;
extern u32 g_FaultSp;
extern OSMesgQueue g_FaultMesgQueue;
extern OSMesg g_FaultMesg;
extern u32 var80094ae0;
extern u32 var80094ae8;
extern u32 var80094de8;
extern u32 var80094e08;
extern u32 var80094e88;
extern u32 var80094ea0;
extern u32 var80094ea4;
extern u32 var80094ea8;
extern u32 var80094eb0;
extern struct var80094ed8 var80094ed8[3];
extern u32 var800951f0;
extern u32 var80095200;
extern u32 var80095208;
extern u32 var8009520c;
extern u8 var80095210[];
extern u32 var80095214;
extern u32 var80099024;
extern u32 var800992e4;
extern struct memorypool g_OnboardMemoryPools[9];
extern struct memorypool g_ExpansionMemoryPools[9];
extern u32 var8009946c;
extern u32 var80099470;
extern u32 var80099474;
extern u32 var80099478;
extern u32 var80099484;
extern u32 var8009985c;
extern u32 g_ArgBuffer[30];
extern u32 var800998f8;
extern u32 var80099900;
extern u32 var80099a00;
extern OSMesg var80099a20;
extern OSMesgQueue var80099a40;
extern struct contdata g_ContData[2];
extern u32 var80099c64;
extern s32 g_ContDisableCooldown[4];
extern OSMesgQueue var80099e78;
extern OSMesg var80099e90;
extern OSMesg var80099eb8;
extern OSMesgQueue var80099ec0;
extern OSMesg var80099ed8;
extern OSMesgQueue var80099ee0;
extern OSMesg var80099ef8;
extern OSMesgQueue var80099f00;
extern OSMesg var80099f18;
extern OSMesgQueue var80099f20;
extern OSContStatus var80099f38[4];
extern u8 g_ContPfsStates[100];
extern u32 var8009a874;
extern u32 var8009a878;
extern u32 var8009a87c;
extern u32 var8009a880;
extern u32 var8009a888;
extern u32 var8009a88c;
extern u32 var8009a890;
extern s16 var8009a894;
extern struct animheader *var8009a898;
extern union filedataptr g_TileFileData;
extern s32 g_TileNumRooms;
extern u32 *g_TileRooms;
extern u32 var8009a8ac;
extern u32 var8009a8b4;
extern struct coord var8009a8b8;
extern struct coord var8009a8c8;
extern struct prop *g_CdObstacle;
extern u32 var8009a8d8;
extern u32 var8009a8e0;
extern u32 var8009a8ec;
extern u32 var8009a8f4;
extern u32 var8009a8f8;
extern u32 var8009a908;
extern u32 var8009a918;
extern u32 var8009a970;
extern u32 var8009ad70;
extern u32 var8009b878;
extern u32 var8009c2d0;
extern u32 var8009c390;
extern u32 var8009c400;
extern u32 var8009c650;
extern __OSEventState __osEventStateTab[15];
extern OSTimer var8009c760;
extern OSTime __osCurrentTime;
extern u32 __osBaseCounter;
extern u32 __osViIntrCount;
extern u32 __osTimerCounter;
extern OSMesg piAccessBuf;
extern OSMesgQueue __osPiAccessQueue;
extern OSMesg siAccessBuf;
extern OSMesgQueue __osSiAccessQueue;
extern u32 __osContPifRam;
extern u32 var8009c81c;
extern u8 __osContLastCmd;
extern u32 __osEepromTimer;
extern u32 __osEepromTimerQ;
extern u32 __osEepromTimerMsg;
extern u32 var8009c870;
extern u32 var8009c970;
extern u32 __osEepPifRam;
extern u32 var8009ca84;
extern u32 var8009cad0;
extern u32 var8009cadc;
extern u32 var8009cae0;
extern u8 var8009caec[4];
extern u8 var8009caf0;
extern s16 var8009cb00;
extern struct nbomb g_Nbombs[6];
extern u32 var8009cbf8;
extern struct prop *g_DangerousProps[MAX_DANGEROUSPROPS];
extern s32 var8009cc30;
extern u16 *var8009cc40;
extern s32 var8009cc44;
extern u32 var8009cc48;
extern u32 var8009cc4c;
extern u32 var8009cc50;
extern u32 var8009cc54;
extern u32 var8009cc58;
extern u32 var8009cc5c;
extern u32 var8009cc60;
extern s32 var8009cc64;
extern u32 var8009cc68;
extern u32 var8009cc6c;
extern u32 var8009cc70;
extern u32 var8009cc74;
extern f32 var8009cc78;
extern void *var8009cc80;
extern void *var8009cc84;
extern void *var8009cc88;
extern u32 var8009cc90;
extern u8 *var8009cca0;
extern u8 *var8009cca8[2];
extern u8 *var8009ccb0[2];
extern u32 var8009ccb8;
extern void *var8009ccc0[20];
extern s32 g_NumChrs;
extern s16 *g_Chrnums;
extern s16 *g_ChrIndexes;
extern s32 g_NumActiveHeadsPerGender;
extern u32 g_ActiveMaleHeads[8];
extern u32 g_ActiveFemaleHeads[8];
extern s32 g_RecentQuipsPlayed[5];
extern u8 g_RecentQuipsIndex;
extern s16 *var8009cda0;
extern struct var8009cda4 *var8009cda4;
extern struct prop *var8009cda8;
extern u32 var8009cdac;
extern u32 var8009cdb0;
extern struct weaponobj *g_ProxyMines[30];
extern u32 var8009ce38;
extern s32 var8009ce40;
extern s32 var8009ce44;
extern s32 var8009ce48;
extern s32 var8009ce4c;
extern s32 g_NumProjectiles;
extern s32 g_NumMonitorThings;
extern struct var8009ce58 *var8009ce58;
extern struct defaultobj *var8009ce5c;
extern struct var8009ce60 *var8009ce60;
extern struct defaultobj *var8009ce64;
extern struct projectile *g_Projectiles;
extern struct monitorthing *g_MonitorThings;
extern u32 var8009ce78;
extern u32 var8009ce88;
extern struct monitorscreen var8009ce98;
extern struct monitorscreen var8009cf10;
extern struct monitorscreen var8009cf88;
extern struct stagesetup g_StageSetup;
extern u8 *g_GeCreditsData;
extern struct objective *g_Objectives[MAX_OBJECTIVES];
extern u32 g_ObjectiveStatuses[MAX_OBJECTIVES];
extern struct tag *g_TagsLinkedList;
extern struct briefingobj *g_BriefingObjs;
extern struct criteria_roomentered *g_RoomEnteredCriterias;
extern struct criteria_multiroomentered *g_MultiroomEnteredCriterias;
extern struct criteria_holograph *g_HolographCriterias;
extern u32 var8009d0d0[2];
extern s32 var8009d0d8;
extern u32 var8009d0e0[4];
extern u32 var8009d0f0;
extern u32 var8009d144;
extern struct fireslot g_Fireslots[NUM_FIRESLOTS];
extern struct casing g_Casings[20];
extern struct var8009da60 var8009da60[8];
extern struct var8009dbe0 var8009dbe0[4];
extern u32 var8009dd00;
extern u32 var8009dd04;
extern u32 var8009dd10;
extern u32 var8009dd20;
extern u32 var8009dd30;
extern u32 var8009dd40;
extern u32 var8009dd50;
extern u32 var8009dd60;
extern u32 var8009dd6c;
extern struct roomacousticdata *g_RoomAcousticData;
extern struct var8009dd78 var8009dd78[10];
extern u16 *var8009ddc8;
extern s32 var8009ddcc;
extern s32 g_DefaultWeapons[2];
extern f32 var8009ddd8;
extern f32 var8009dddc;
extern f32 var8009dde0;
extern f32 var8009dde4;
extern s16 g_WarpPadId;
extern u32 *var8009ddec;
extern f32 var8009ddf0;
extern f32 var8009ddf4;
extern f32 var8009ddf8;
extern f32 var8009ddfc;
extern f32 var8009de00;
extern u32 var8009de04;
extern u32 var8009de08;
extern u32 var8009de0c;
extern s32 g_CameraAnimCurFrame;
extern u32 var8009de14;
extern s16 g_CameraAnimNum;
extern f32 g_CutsceneBlurFrac;
extern s32 var8009de20;
extern s32 var8009de24;
extern f32 var8009de28;
extern s32 var8009de2c;
extern f32 var8009de30;
extern s16 g_SpawnPoints[MAX_SPAWNPOINTS];
extern s32 g_NumSpawnPoints;
extern u32 var8009de78;
extern u32 var8009de98;
extern u32 var8009de9c;
extern u32 g_NextHudMessageId;
extern u8 var8009deb0[4];
extern char g_CheatMarqueeString[];
extern u32 var8009dfbc;
extern s32 var8009dfc0;
extern struct briefing g_Briefing;
extern struct missionconfig g_MissionConfig;
extern struct menu g_Menus[4];
extern struct menudata g_MenuData;
extern u32 var800a2038;
extern u32 var800a203c;
extern u32 var800a2040;
extern u32 var800a2044;
extern u32 var800a2048;
extern struct activemenu g_AmMenus[4];
extern struct font2a4 *g_AmFont1;
extern struct font *g_AmFont2;
extern s32 g_AmIndex;
extern u8 g_InventoryWeapon;
extern u32 g_CheatsActiveBank0;
extern u32 g_CheatsActiveBank1;
extern u32 g_CheatsEnabledBank0;
extern u32 g_CheatsEnabledBank1;
extern struct savelocation_2d8 g_FilemgrFileToCopy;
extern struct savelocation_2d8 var800a21e8;
extern struct savelocation_2d8 g_FilemgrFileToDelete;
extern struct savelocation_2d8 var800a21f8;
extern struct savefile_solo g_SoloSaveFile;
extern struct savelocation_2d8 g_FilemgrLoadedMainFile;
extern u32 var800a22d0;
extern u8 var800a2328[4];
extern u8 g_AltTitle;
extern u32 var800a2330;
extern u32 var800a2344;
extern s32 *g_PadsFile;
extern u16 *g_PadOffsets;
extern u16 *g_CoverFlags;
extern s32 *g_CoverRooms;
extern u32 var800a2368;
extern u16 var800a236c;
extern u16 *g_CoverNums;
extern struct var800a2380 var800a2380[5];
extern struct var800a3180 var800a3180[4];
extern u32 var800a33a0;
extern u32 var800a33a4;
extern u32 var800a33a8;
extern u32 var800a33e8;
extern u32 var800a3410;
extern u32 var800a3420;
extern struct explosion *g_Explosions;
extern s32 g_MaxExplosions;
extern struct smoke *g_Smokes;
extern s32 g_MaxSmokes;
extern Mtx var800a3448;
extern Mtx var800a3488;
extern struct spark g_Sparks[100];
extern u32 g_NextSparkIndex;
extern struct sparkgroup g_SparkGroups[];
extern u32 var800a4130;
extern f32 *var800a4154;
extern s32 var800a4158;
extern u32 var800a415c;
extern f32 var800a4160;
extern u32 var800a4164;
extern u32 var800a4168;
extern u32 var800a416c;
extern struct creditsdata *g_CreditsData;
extern u32 var800a4184;
extern u32 var800a418c;
extern u32 var800a4190;
extern u32 var800a4194;
extern u32 var800a41a0;
extern struct var800a41b0 *var800a41b0; // head
extern struct var800a41b0 *var800a41b4; // tail
extern u32 var800a41b8;
extern char var800a41c0[];
extern u32 var800a41d8;
extern u32 var800a45a0;
extern u32 var800a45a8;
extern s32 var800a45c0; // count of var800a45c4
extern struct var800a45c4 *var800a45c4;
extern struct var800a45d0 var800a45d0;
extern Gfx *var800a4634;
extern struct var800a4640 var800a4640;
extern u32 var800a491c;
extern u32 var800a4920;
extern u32 var800a4924;
extern struct room *g_Rooms;
extern u8 *g_MpRoomVisibility;
extern s16 var800a4930[1];
extern u32 var800a4bec;
extern u32 var800a4bf0;
extern s16 var800a4bf8[100];
extern u32 var800a4cc0;
extern struct var800a4cc4 *var800a4cc4;
extern struct portal *g_Portals;
extern struct var800a4ccc *var800a4ccc; // indexed by portalnum
extern u8 *var800a4cd0;
extern struct portalcmd *g_PortalCommands;
extern u8 *g_LightsFileData;
extern s16 *var800a4ce0; // portal numbers
extern s16 var800a4ce4[2];
extern struct var800a4ce8 *var800a4ce8;
extern struct portalthing *g_PortalThings;
extern struct var800a4cf0 var800a4cf0;
extern u32 var800a6470;
extern u32 var800a647c;
extern u32 var800a6538;
extern u32 var800a65b8;
extern struct screenbox var800a65c0;
extern struct screenbox var800a65c8;
extern u32 g_PortalDisableParentExec;
extern u32 g_FogDisabled;
extern u32 var800a65f0;
extern u32 var800a6600;
extern u32 var800a6618;
extern u32 var800a661c;
extern u32 var800a6620;
extern u32 var800a6630;
extern u8 *var800a6660;
extern s16 *var800a6668;
extern u32 var800a666c;
extern struct fileinfo g_FileInfo[NUM_FILES];
extern u8 *g_GfxBuffers[3];
extern u8 *g_VtxBuffers[3];
extern u8 *g_GfxMemPos;
extern u8 g_GfxActiveBufferIndex;
extern u32 g_GfxRequestedDisplayList;
extern struct audiohandle *g_MiscSfxAudioHandles[3];
extern s32 g_MiscSfxActiveTypes[3];
extern u32 var800aa5cc;
extern s32 g_MusicStageNum; // stage number
extern struct var800aa5d8 var800aa5d8[40];
extern struct var800aaa38 var800aaa38[3];
extern u32 g_AudioXReasonsActive[4];
extern u32 var800aaa78[4];
extern u32 g_AudioXReasonDurations[4];
extern u32 var800aaa98;
extern u32 *g_LangBanks[69];
extern void *var800aabb4;
extern struct var800aabb8 *var800aabb8;
extern struct texture *g_Textures;
extern u32 var800aabc8[4];
extern u32 var800aabd8;
extern u32 var800ab538;
extern u32 var800ab53c;
extern u32 var800ab540;
extern u32 var800ab544;
extern u32 var800ab548;
extern u32 var800ab550;
extern u8 *g_TextureConfigSegment;
extern u32 var800ab558;
extern struct textureconfig *var800ab55c;
extern struct textureconfig *var800ab560;
extern Gfx *var800ab564;
extern Gfx *var800ab568;
extern Gfx *var800ab56c;
extern struct var800ab570 *var800ab570;
extern struct textureconfig *var800ab574;
extern struct textureconfig *var800ab578;
extern struct textureconfig *var800ab57c;
extern struct textureconfig *var800ab580;
extern struct textureconfig *var800ab584;
extern struct textureconfig *var800ab588;
extern struct textureconfig *var800ab58c;
extern struct textureconfig *var800ab590;
extern struct textureconfig *var800ab594;
extern struct textureconfig *var800ab598;
extern struct textureconfig *var800ab59c;
extern struct textureconfig *var800ab5a0;
extern struct textureconfig *var800ab5a4;
extern struct textureconfig *var800ab5a8;
extern struct textureconfig *var800ab5ac;
extern s32 var800ab5b0;
extern struct var800ab5b8 var800ab5b8[8];
extern struct var800ab718 var800ab718[8];
extern u32 var800ab7b8;
extern u32 var800ab7c0;
extern u32 var800ab7c4;
extern u32 var800ab7c8;
extern u32 var800abac8;
extern u32 var800abdc8;
extern u32 var800ac0e8;
extern u32 var800ac0f8[4];
extern u32 var800ac108;
extern struct scenariodata g_ScenarioData;
extern u32 var800ac258;
extern u32 var800ac2c0;
extern u32 var800ac328;
extern u32 var800ac390;
extern u32 var800ac3f8;
extern u32 var800ac460;
extern u32 var800ac4cc;
extern struct chrdata *g_MpPlayerChrs[MAX_MPCHRS];
extern struct mpchr *var800ac500[MAX_MPCHRS];
extern s32 g_MpNumPlayers;
extern struct mpsim g_MpSimulants[MAX_SIMULANTS];

// Elements 0-3 are difficulty levels for simulant 0 when there's 1/2/3/4 players
// Elements 4-7 are difficulty levels for simulant 1 when there's 1/2/3/4 players
// ...
// Elements 28-31 are difficulty levels for simulant 7 when there's 1/2/3/4 players
extern u8 g_MpSimulantDifficultiesPerNumPlayers[32];

extern struct mpplayer g_MpPlayers[6];
extern u8 g_AmBotCommands[16];
extern struct mpsetup g_MpSetup;
extern struct savefile_setup g_MpSetupSaveFile;
extern struct mplockinfo g_MpLockInfo;
extern u32 var800acc28[18];
extern u32 g_RadarX;
extern u32 g_RadarY;
extern struct chrdata *g_MpSimulantChrs[MAX_SIMULANTS];
extern u8 g_MpFeaturesForceUnlocked[40];
extern u8 g_MpFeaturesUnlocked[80];
extern struct frdata g_FrData;
extern struct trainingdata g_DtData;
extern struct trainingdata g_HoloTrainingData;

#endif
