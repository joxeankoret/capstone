/* Capstone Disassembler Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013> */

#ifndef CS_MIPS_MAP_H
#define CS_MIPS_MAP_H

#include "../../include/capstone.h"
#include "../../include/mips.h"

// return name of regiser in friendly string
char *Mips_reg_name(unsigned int reg);

// given internal insn id, return public instruction info
void Mips_get_insn_id(cs_insn *insn, unsigned int id);

// given public insn id, return internal insn id
unsigned int Mips_get_insn_id2(unsigned int id);

// given public insn id, return internal insn id
char *Mips_insn_name(unsigned int id);

// map instruction name to instruction ID
mips_reg Mips_map_insn(char *name);

// map internal raw register to 'public' register
mips_reg Mips_map_register(unsigned int r);

#endif
