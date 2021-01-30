#include <libultra_internal.h>

GLOBAL_ASM(
glabel osContStartQuery
/*    4f350:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*    4f354:	afbf0014 */ 	sw	$ra,0x14($sp)
/*    4f358:	afa40020 */ 	sw	$a0,0x20($sp)
/*    4f35c:	0c012a18 */ 	jal	__osSiGetAccess
/*    4f360:	afa0001c */ 	sw	$zero,0x1c($sp)
/*    4f364:	3c0e800a */ 	lui	$t6,%hi(__osContLastCmd)
/*    4f368:	91cec820 */ 	lbu	$t6,%lo(__osContLastCmd)($t6)
/*    4f36c:	11c0000c */ 	beqz	$t6,.L0004f3a0
/*    4f370:	00000000 */ 	nop
/*    4f374:	0c012af0 */ 	jal	__osPackRequestData
/*    4f378:	00002025 */ 	or	$a0,$zero,$zero
/*    4f37c:	3c05800a */ 	lui	$a1,%hi(__osContPifRam)
/*    4f380:	24a5c7e0 */ 	addiu	$a1,$a1,%lo(__osContPifRam)
/*    4f384:	0c012a34 */ 	jal	__osSiRawStartDma
/*    4f388:	24040001 */ 	addiu	$a0,$zero,0x1
/*    4f38c:	afa2001c */ 	sw	$v0,0x1c($sp)
/*    4f390:	8fa40020 */ 	lw	$a0,0x20($sp)
/*    4f394:	00002825 */ 	or	$a1,$zero,$zero
/*    4f398:	0c0121bc */ 	jal	osRecvMesg
/*    4f39c:	24060001 */ 	addiu	$a2,$zero,0x1
.L0004f3a0:
/*    4f3a0:	3c05800a */ 	lui	$a1,%hi(__osContPifRam)
/*    4f3a4:	24a5c7e0 */ 	addiu	$a1,$a1,%lo(__osContPifRam)
/*    4f3a8:	0c012a34 */ 	jal	__osSiRawStartDma
/*    4f3ac:	00002025 */ 	or	$a0,$zero,$zero
/*    4f3b0:	3c01800a */ 	lui	$at,%hi(__osContLastCmd)
/*    4f3b4:	afa2001c */ 	sw	$v0,0x1c($sp)
/*    4f3b8:	0c012a29 */ 	jal	__osSiRelAccess
/*    4f3bc:	a020c820 */ 	sb	$zero,%lo(__osContLastCmd)($at)
/*    4f3c0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*    4f3c4:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*    4f3c8:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*    4f3cc:	03e00008 */ 	jr	$ra
/*    4f3d0:	00000000 */ 	nop
);

void osContGetQuery(OSContStatus *data)
{
	u8 pattern;
	__osContGetInitData(&pattern, data);
}
