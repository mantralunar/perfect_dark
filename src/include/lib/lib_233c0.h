#ifndef _IN_LIB_LIB_233C0_H
#define _IN_LIB_LIB_233C0_H
#include <ultra64.h>
#include "types.h"

void func000233c0(void);
u32 func00023640(void);
void func0002373c(void);
s32 animGetNumFrames(s16 anim_id);
u32 func00023794(void);
u32 func000237dc(void);
u32 func000237e8(void);
s32 func0002384c(s32 animnum, s32 frame);
u32 func00023908(void);
u32 func000239e0(void);
u32 func00023ab0(void);
u32 func00023d0c(void);
void func00023d38(s32 animnum);
u32 func00023f50(void);
u32 func00023fe0(void);
u32 func00024050(void);
u32 func0002485c(void);
f32 func00024b64(u32 arg0, u32 arg1, struct stagethinglist *arg2, s32 animnum, u32 arg4, struct coord *coord, u32 arg6);
u32 func00024c14(void);
u32 func00024e40(void);
void func00024e4c(struct coord *arg0, struct coord *arg1, u32 line, char *file);
f32 func00024e98(void);
u32 func00024ea4(void);
struct prop *func00024eb0(void);
void func00024ebc(struct coord *pos, u32 line, char *file);
u32 func00024ee8(void);
u32 func00024f10(void);
u32 func00024f6c(void);
u32 func00024fb0(void);
u32 func00025038(void);
u32 func000250cc(void);
u32 func00025168(void);
u32 func000251ac(void);
u32 func00025254(void);
u32 func00025314(void);
u32 func00025364(void);
u32 func000253c4(void);
u32 func00025410(void);
u32 func000254d8(void);
u32 func00025654(void);
u32 func00025724(void);
u32 func00025774(void);
u32 func00025848(void);
u32 func00025928(void);
void tileGetFloorCol(struct tile *tile, u16 *floorcol);
void tileGetFloorType(struct tile *tile, u8 *floortype);
u32 func00025c74(void);
u32 func00025f90(void);
u32 func000260cc(void);
u32 func00026288(void);
u32 func000263e4(void);
u32 func00026520(void);
u32 func00026654(void);
u32 func000266a4(void);
void platformGetRidingProps(struct prop *platform, s16 *propnums, u32 len);
u32 func00026a04(void);
u32 func00026e7c(void);
u32 func0002709c(void);
u32 func000272f8(void);
s32 func000274e0(struct geo *geo, f32 x, f32 z, f32 angle, s32 arg4, s32 arg5);
s32 func000276c8(struct geo *geo, f32 x, f32 z, f32 angle, s32 arg4, s32 arg5);
u32 func00027738(void);
void func00027d1c(struct coord *pos, f32 width, s16 *rooms, u32 arg3, u32 arg4, u32 arg5, f32 arg6, f32 arg7, u32 *arg8, u32 arg9);
u32 func00027f78(void);
u32 func00028200(void);
u32 func0002840c(void);
u32 func00028638(void);
u32 func0002885c(void);
u32 func00028914(void);
u32 func00028df0(void);
u32 func0002901c(void);
f32 func000296a0(u32 *arg0, struct coord *pos, struct tilething **arg2, f32 width);
bool func00029ffc(struct coord *pos, f32 width, f32 foreheadheight, f32 inversefeettoeyesheight, s16 *rooms, u32 arg5, struct coord *laddernormal);
u32 func0002a13c(void);
f32 coordFindGroundY(struct coord *pos, f32 width, s16 *rooms, u16 *floorcol, u8 *floortype, u16 *floorflags, s16 *floorroom, s32 *inlift, struct prop **lift);
f32 func0002a330(struct coord *pos, f32 width, s16 *rooms, u16 *floorcol, s32 arg4);
f32 func0002a36c(struct coord *coord, s16 *rooms, u16 *floorcol, s32 arg3);
u32 func0002a400(void);
u32 func0002a440(void);
u32 func0002a4d0(void);
s32 func0002a564(struct coord *pos, s16 *rooms, f32 *arg2, u32 arg3, struct coord *arg4, bool *arg5);
u32 func0002a5e4(void);
bool func0002a684(struct coord *pos, f32 width, s16 *rooms, s32 arg3, s32 arg4, f32 arg5, f32 arg6);
u32 func0002a6fc(void);
u32 func0002a9f0(void);
u32 func0002aac0(void);
u32 func0002ab98(void);
u32 func0002ac70(void);
u32 func0002b128(void);
u32 func0002b560(void);
u32 func0002b954(void);
u32 func0002bd04(void);
u32 func0002c328(void);
u32 func0002c528(void);
u32 func0002c714(void);
u32 func0002d15c(void);
u32 func0002d3b0(void);
bool func0002d6ac(struct coord *pos, s16 *rooms, struct coord *targetpos, u32 arg3, u32 arg4, f32 arg5, f32 arg6);
u32 func0002d72c(void);
bool func0002d7c0(struct coord *pos, s16 *rooms, struct coord *arg2, u32 arg3, u32 arg4, f32 arg5, f32 arg6);
u32 func0002d840(void);
u32 func0002d8b8(void);
u32 func0002d95c(void);
u32 func0002da50(void);
u32 func0002dac8(void);
bool func0002db98(struct coord *viewpos, s16 *rooms, struct coord *targetpos, s32 arg3, u32 arg4);
u32 func0002dc18(struct coord *coord, s16 *room, struct coord *coord2, s32 arg3);
bool hasLineOfSight(struct coord *coord, s16 *room, struct coord *coord2, s16 *room2, s32 arg4, s32 arg5);
u32 func0002dcd0(void);
bool func0002dcfc(struct coord *pos, s16 *rooms, struct coord *pos2, s16 *rooms2, s16 *rooms3, u32 arg5, u32 arg6);
u32 func0002dd90(struct coord *pos, s16 *rooms, struct coord *pos2, u32 arg3, u32 arg4);
u32 func0002de10(void);
u32 func0002de34(void);
u32 func0002deac(void);
u32 func0002ded8(void);
u32 func0002dffc(void);
u32 func0002e278(void);
bool func0002e4c4(struct geo *geo, s16 *rooms, u32 arg2);
u32 func0002e680(void);
u32 func0002e82c(void);
u32 func0002e9d8(void);
u32 func0002eb84(void);
u32 func0002ed30(void);
u32 func0002f02c(void);
bool func0002f308(struct coord *viewpos, s16 *rooms, struct coord *targetpos, f32 distance, s32 arg4, u16 arg5);
bool func0002f450(struct coord *viewpos, s16 *rooms, struct coord *targetpos, f32 distance, s32 arg4);

#endif
