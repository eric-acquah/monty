#include "monty.h"
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

	compile(mfile);/*process the file contents*/

	fclose(mfile);
	return (0);
}
