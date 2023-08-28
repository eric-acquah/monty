#include "monty.h"

/**
 *opcode_match - find a match in a list of opcodes
 *@cmd: user token
 *Return: index of the matching opcode else return -1
 *to indicate there was no match
 */

int opcode_match(char *cmd)
{
	int j;
	char *opcode[] = {
		"push", "pop", "pall", "swap",
		"add", "pint", "nop",
		"sub", "div", "mul",
		"mod", "pchar",
		NULL
	};

	j = 0;
	while (opcode[j] != NULL)
	{
		if (strcmp(cmd, opcode[j]) == 0)
			return (j);
		j++;
	}
		return (-1);
}

/**
 * digit_check - check for digit
 * @num: numbers to be checked
 * Return: return the digit
 */

int digit_check(char *num)
{
	int i;

	if (num == NULL)
		return (0);

	i = 0;
	if (num[0] == '-')
		i++;
	for (; num[i] != '\0'; i++)
	{
		if (isdigit(num[i]) == 0)
			return (0);
	}
	return (1);
}
