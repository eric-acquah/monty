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

/**
 *sub - subtract the top two values on the stack
 *
 *Return: 0 if successful else -8
 */
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

/**
 *_div - devide the top two values on the stack
 *
 *Return: 0 if successful else if stack is < 2 return -9 else return -10
 */
int _div(void)
{
	int a, b, div;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-9);
	}

	a = pop();
	if (a == 0)
		return (-10);
	b = pop();
	div = b / a;
	push(div);
	return (0);
}

/**
 *mul - multiply the top two values on the stack
 *
 *Return: 0 if successful else -11
 */
int mul(void)
{
	int a, b, mul;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-11);
	}

	a = pop();
	b = pop();
	mul = b * a;
	push(mul);
	return (0);
}
