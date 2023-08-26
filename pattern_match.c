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
		"pop",
		"pall",
		"swap",
		"add",
		"pint",
		NULL
	};

	if (strncmp(cmd, "push", 4) == 0)
	{
		if (cmd[5] != ' ' && cmd[5] != '\0')
			return (0);
	}

	j = 1;
	while (opcode[j] != NULL)
	{
		if (strcmp(cmd, opcode[j]) == 0)
			return (j);
		j++;
	}
		return (-1);
}

/**
 *push_preprocessor - split push opcode to command and argument
 *@push: the opcode
 *Return: the argument converted to an integer
 */
int push_preprocessor(char *push)
{
	char *split;
	char splited[100];

	strcpy(splited, push);

	split = strtok(splited, " ");
	split = strtok(NULL, " ");

	return (atoi(split));
}
