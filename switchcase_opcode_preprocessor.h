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
	if (add() == -7)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
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
case 7:
	if (sub() == -8)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 8:
	arg = _div();
	if (arg == -9 || arg == -10)
	{
		if (arg == -9)
			fprintf(stderr, "L%d: can't div, stack too short\n", l);
		else
			fprintf(stderr, "L%d: division by zero\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 9:
	if (mul() == -11)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 10:
	if (mod() == -12)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 101:
	i++;
	break;
default:
	fprintf(stderr, "L%d: unknown instruction %s\n", l, toks[i]);
	free_list(top);
	free(buff);
	fclose(mfile);
	exit(EXIT_FAILURE);
}

#endif
