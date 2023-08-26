#include "extern.h"
#include "monty.h"
/**
 *pint - print the value at the top of the stack
 *
 */

int pint(void)
{
	int item;

	if (top != NULL)
	{
		item = top->n;
		printf("%d\n", item);
		return (0);
	}

	return (-4);
}

/**
 *free_list - free the allocated memory to the stack
 *@head: pointer to the top of the stack
 */
void free_list(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/**
 *swap - swap the top two on the stack
 *Return: 0 if successful else -3
 */
int swap(void)
{
	stack_t *first = top;
	stack_t *second = top->next;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-3);
	}

	if (second->next != NULL)
		second->next->prev = first;

	first->next = second->next;

	first->prev = second;
	second->next = first;
	second->prev = NULL;

	top = second; /* Update the top pointer */

	return (0);
}

/**
 *pall - print all items in stack
 */
int pall(void)
{
	stack_t *tmp = top;

	if (top != NULL)
	{
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->next;
		}
		return (0);
	}
	return (-5);
}
