#ifndef SWITCH
#define SWITCH

switch (opcode_match(toks[0]))
{
case 0:
	arg = digit_check(toks[1]);
	if (arg)
	{
		if (push(atoi(toks[1])) == -1)
		{
			free(buff);
			fclose(mfile);
			exit(EXIT_FAILURE);
		}

	}
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
	pall();
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
		fprintf(stderr, "L%d: can't pint, stack empty\n", l);
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
	arg = mod();
	if (arg == -12 || arg == -21)
	{
		if (arg == -12)
			fprintf(stderr, "L%d: can't mod, stack too short\n", l);
		else
			fprintf(stderr, "L%d: division by zero\n", l);
		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
case 11:
	arg = pchar();
	if (arg == -13 || arg == -14)
	{
		if (arg == -13)
			fprintf(stderr, "L%d: can't pchar, stack too short\n", l);
		else
			fprintf(stderr, "L%d: can't pchar, stack empty\n", l);

		free_list(top);
		free(buff);
		fclose(mfile);
		exit(EXIT_FAILURE);
	}
	break;
default:
	fprintf(stderr, "L%d: unknown instruction %s\n", l, toks[0]);
	free_list(top);
	free(buff);
	fclose(mfile);
	exit(EXIT_FAILURE);
}

#endif
