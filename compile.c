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
	int i;

	while ((stat = getline(&buff, &init_byts, mfile)) != neg)
	{

		if (buff == NULL || stat == neg)
		{
			if (stat == neg)
				free(buff);
			exit(EXIT_FAILURE);
		}

		token = strtok(buff, "\n");
		i = 0;
		while (token != NULL)
		{
			tokens[i] = token;
			token = strtok(NULL, "\n");
			i++;
		}
		tokens[i] = NULL;

		opcode_processor(tokens);
	}
	free(buff);
	free_list(top);
}
