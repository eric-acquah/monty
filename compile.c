#include "monty.h"
#include "extern.h"

/**
 *compile - proccess the opcode within file
 *@mfile: from file to read from
 */

void compile(FILE *mfile)
{
	char *buff = NULL, *token, *tokens[1024];
	size_t init_byts = 0, stat = 0, neg = -1;
	int i, l = 1;

	while ((stat = getline(&buff, &init_byts, mfile)) != neg)
	{
		for (i = 0; buff[i] != '\0' && buff[i] != '#'; i++)
			;

		buff[i] = '\0';

		token = strtok(buff, " \n");
		i = 0;
		while (token != NULL)
		{
			tokens[i] = token;
			token = strtok(NULL, " \n");
			i++;
		}
		tokens[i] = NULL;

		opcode_processor(tokens, buff, mfile, l);
		l++;
	}
	free(buff);
	free_list(top);
}
