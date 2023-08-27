#include "monty.h"
#include "extern.h"

/**
 *nop - do absolutely nothing
 *
 */
void nop(void)
{
	;
}

/**
 *add - sum the top two values on the stack
 *
 *Return: 0 if successful else -7
 */

int add(void)
{
	int a, b, sum;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-7);
	}

	a = pop();
	b = pop();
	sum = a + b;
	push(sum);
	return (0);
}

int sub(void)
{
	int a, b, sub;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-8);
	}

	a = pop();
	b = pop();
	sub = b - a;
	push(sub);
	return (0);
}
