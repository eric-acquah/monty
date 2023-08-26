#include "monty.h"
#include "extern.h"
/**
 *opcode_processor - monty proccess opcodes
 *@toks: tokens
 */

void opcode_processor(char **toks)
{
	int arg, i = 0;

	while (toks[i] != NULL)
	{
#include "switchcase_opcode_preprocessor.h"
		i++;
	}
}
