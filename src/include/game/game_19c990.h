#ifndef IN_GAME_GAME_19C990_H
#define IN_GAME_GAME_19C990_H
#include <ultra64.h>
#include "types.h"

extern u8 var80088804;
extern u8 var800888a0;

bool ciIsTourDone(void);
u8 ciGetFiringRangeScore(s32 weapon_id);
u32 func0f19c9e4(void);
u32 func0f19cad4(void);
void func0f19cb38(s32 weaponnum);
bool stageIsComplete(s32 solostageindex);
u32 func0f19cbcc(void);
u32 func0f19cc50(void);
u32 func0f19ccc0(u32 weaponnum);
u32 func0f19cdf0(u32 weaponnum);
u32 func0f19cf20(s32 stage_index); // firing range related
u32 func0f19d250(void);
u32 func0f19d25c(void);
u32 func0f19d268(s32 arg0);
u32 func0f19d2e0(void);
u32 func0f19d338(void);
u32 func0f19d414(void);
void func0f19d4ec(void);
void *func0f19d560(u32 len);
void frSetDifficulty(s32 difficulty);
u32 frGetDifficulty(void);
void func0f19d5f4(void);
struct frdata *getFiringRangeData(void);
u32 func0f19d7d8(void);
u32 func0f19d8a4(void);
u32 func0f19d90c(void);
void func0f19de24(void);
u32 func0f19def4(void);
u32 func0f19df18(void);
u32 func0f19df58(void);
u32 func0f19e090(void);
u32 func0f19e3e0(void);
u32 func0f19e44c(void);
u32 func0f19e6fc(void);
u32 func0f19e754(void);
u32 func0f19e7a8(void);
u32 func0f19e900(void);
u32 func0f19e9c0(void);
u32 func0f19ea80(void);
void func0f19ecdc(s32 arg0);
u32 func0f19f07c(void);
u32 func0f19f124(void);
u32 func0f19f18c(void);
u32 func0f19f220(void);
u32 func0f19f294(void);
u32 func0f19f2ec(void);
u32 func0f19f39c(void);
u32 func0f19f524(void);
void func0f19f994(void);
u32 func0f1a0924(void);
u32 func0f1a0a70(void);
s32 frIsInTraining(void);
u32 func0f1a0cc0(void);
u32 func0f1a0fc8(void);
bool ciIsChrBioUnlocked(u32 bodynum);
struct chrbio *ciGetChrBioByBodynum(u32 bodynum);
u32 func0f1a1184(void);
u32 func0f1a11b8(void);
u32 func0f1a1210(u32 arg0);
struct miscbio *ciGetMiscBio(s32 index);
u32 func0f1a1328(void);
u32 func0f1a1398(void);
u32 func0f1a13f0(void);
u32 func0f1a1468(void);
u32 func0f1a14a8(void);
struct locationbio *ciGetLocationBio(s32 index);
bool ciIsLocationBioUnlocked(u32 bioindex);
u32 func0f1a16a4(void);
u32 func0f1a1714(void);
u32 func0f1a176c(void);
u32 func0f1a17e4(void);
struct trainingdata *getDeviceTrainingData(void);
void dtRestorePlayer(void);
void dtPushEndscreen(void);
void dtTick(void);
void func0f1a1ac0(void);
void dtBegin(void);
void dtEnd(void);
bool dtIsAvailable(s32 deviceindex);
s32 dtGetNumAvailable(void);
s32 func0f1a1d68(s32 wantindex);
u32 dtGetWeaponByDeviceIndex(s32 deviceindex);
u32 ciGetStageFlagByDeviceIndex(u32 deviceindex);
char *dtGetDescription(void);
char *dtGetTip1(void);
char *dtGetTip2(void);
struct trainingdata *getHoloTrainingData(void);
void htPushEndscreen(void);
void htTick(void);
void func0f1a2198(void);
void htBegin(void);
void htEnd(void);
bool func0f1a2450(u32 value);
u32 func0f1a2484(void);
u32 func0f1a24dc(u32 arg0);
char *htGetName(s32 index);
u32 func0f1a25c0(s32 index);
char *htGetDescription(void);
char *htGetTip1(void);
char *htGetTip2(void);
void frGetGoalTargetsText(char *buffer);
void frGetTargetsDestroyedValue(char *buffer);
void frGetScoreValue(char *buffer);
u32 func0f1a2824(void);
u32 func0f1a2888(void);
u32 func0f1a293c(void);
u32 func0f1a29b8(void);
u32 func0f1a2ad0(void);
u32 func0f1a2bc4(void);
u32 func0f1a2d88(void);
u32 func0f1a2f60(void);

#endif
