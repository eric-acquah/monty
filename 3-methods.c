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
	mod = a % b;
	push(mod);
	return (0);
}
