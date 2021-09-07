#ifndef IN_GAME_GAME_0D4690_H
#define IN_GAME_GAME_0D4690_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

u32 func0f0d4690(void);
u32 func0f0d475c(void);
Gfx *func0f0d479c(Gfx *gdl);
Gfx *func0f0d49c8(Gfx *gdl);
u32 func0f0d4a3c(void);
u32 func0f0d4c80(void);
u32 func0f0d4d0c(void);
void savebufferOr(struct savebuffer *buffer, u32 arg1, s32 arg2);
void savebufferWriteBits(struct savebuffer *buffer, u32 value, s32 numbits, u8 *dst);
u32 savebufferReadBits(struct savebuffer *buffer, s32 offset);
void savebufferClear(struct savebuffer *buffer);
void func0f0d5484(struct savebuffer *buffer, u8 *data, u8 len);
void func0f0d54c4(struct savebuffer *buffer);
void savebufferReadString(struct savebuffer *buffer, char *dst, bool addlinebreak);
u32 func0f0d55a4(void);
void func0f0d564c(u8 *data, char *dst, bool addlinebreak);
void func0f0d5690(u8 *dst, char *buffer);
u32 func0f0d575c(void);
u32 func0f0d579c(void);
void formatTime(char *dst, s32 time, u32 arg2);
void func0f0d5a7c(void);

#endif
