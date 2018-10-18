/*
 * sf.h
 *
 *  Created on: Apr 11, 2018
 *      Author: max
 */

#ifndef SF_H_
#define SF_H_



#define SF_UID 0x5A5D6

#include <alt_types.h>

void sfRpc(void);
void sfInit(int devs);

alt_u32 sfJedecId(void);
alt_u32 sfUniqueId(alt_u8* id);

alt_u32 sfErase(alt_u32 mode, alt_u32 adr);
alt_u32 sfProgram(alt_u32 adr, alt_u8* data, alt_u32 len);
alt_u32 sfRead(alt_u32 adr, alt_u8* data, alt_u32 len);

alt_u32 sfSRErase(alt_u8 reg);
alt_u32 sfSRProgram(alt_u8 reg, alt_u8 adr, alt_u8* data, alt_u32 len);
alt_u32 sfSRLock(alt_u8 reg);
alt_u32 sfSRRead(alt_u8 reg, alt_u8 adr, alt_u8* data, alt_u32 len);

alt_u32 sfProtect(void);

alt_u32 sfEnableQuad(void);

#endif /* SF_H_ */
