#include "adt_header.h"
#include "extern.h"

/**
 *main - monty program interface
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	FILE *mfile;
	char *buff = NULL, *token, *tokens[1024];
	size_t init_byts = 0, stat, neg = -1;
	int i;

	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	mfile = fopen(argv[1], "r");
	if (mfile == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	stat = getline(&buff, &init_byts, mfile);
	if (buff == NULL || stat == neg)
	{
		if (stat == neg)
			free(buff);
		exit(EXIT_FAILURE);
	}

	token = strtok((char *)buff, " \n");
	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, " \n");
		i++;
	}
	tokens[i] = NULL;

	i = 0;
	while (tokens[i] != NULL)
	{
		printf("token[%s]\n", tokens[i]);
		i++;
	}
	fclose(mfile);
	return (0);
}
