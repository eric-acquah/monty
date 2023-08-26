#ifndef SWITCH
#define SWITCH

switch (opcode_match(toks[i]))
{
case 0:
	arg = push_preprocessor(toks[i]);
	if (arg != -505)
		push(arg);
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 1:
	if (pop() == -2)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 2:
	if (pall() == -5)
	{
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 3:
	if (swap() == -3)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 4:
	add();
	break;
case 5:
	if (pint() == -4)
	{
		fprintf(stderr, "can't pint, stack empty\n");
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 6:
	nop();
	break;
default:
	fprintf(stderr, "L%d: unknown instruction %s\n", l, toks[i]);
	free_list(top);
	free(buff);
	fclose(mfile);
	exit(EXIT_FAILURE);
}

#endif
