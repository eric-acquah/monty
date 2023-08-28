#include "monty.h"
#include "extern.h"

/**
 *mod - perform a modulus operation on the top top values on the stack
 *Return: 0 if successful else return -12
 */

int mod(void)
{
	int a, b, mod;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-12);
	}

	a = pop();
	b = pop();
	mod = b % a;
	push(mod);
	return (0);
}

/**
 *pchar - treat the top value on the stack as an ascii value
 *Return: 0 if successful else return -13
 */

int pchar(void)
{
	int val;

	val = pop();
	push(val);
	if (val == -2)
		return (-13);
	else if (isascii(val) == 0)
		return (-14);

	printf("%c\n", val);
	return (0);
}
