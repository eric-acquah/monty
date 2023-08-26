#ifndef SWITCH
#define SWITCH

switch (opcode_match(toks[i]))
{
case 0:
	arg = push_preprocessor(toks[i]);
	if (isalpha(arg) == 0)
		push(arg);
	else
	{
		fprintf(stderr, "L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
	break;
case 1:
	if (pop() == -2)
	{
		fprintf(stderr, "L<line_number>: can't pop an empty stack\n");
		exit(EXIT_FAILURE);
	}
	break;
case 2:
	pall();
	break;
case 3:
	if (swap() == -3)
	{
		fprintf(stderr, "L<line_number>: can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}
	break;
case 4:
	add();
	break;
case 5:
	pint();
	break;
default:
	fprintf(stderr, "L<line_number>: unknown instruction <opcode>\n");
	exit(EXIT_FAILURE);
}

#endif
