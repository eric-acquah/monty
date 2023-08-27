#include "monty.h"
#include "extern.h"
/**
 *opcode_processor - monty proccess opcodes
 *@toks: tokens
 */

void opcode_processor(char **toks, char *buff, FILE *mfile, int l)
{
	int arg;

#include "switchcase_opcode_preprocessor.h"
}
