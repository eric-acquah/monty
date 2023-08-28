#ifndef ADT
#define ADT
#define _GNU_SOURCE

/*including libraries*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*Function declearations*/

int pint(void);

void pall(void);

stack_t *makenode(int val);

int is_empty(void);

int is_full(void);

int pop(void);

int push(int value);

void free_list(stack_t *head);

int swap(void);

int opcode_match(char *cmd);

void opcode_processor(char **toks, char *buff, FILE *mfile, int l);

void compile(FILE *mfile);

int digit_check(char *num);

int add(void);

int sub(void);

int _div(void);

int mul(void);

int mod(void);

int pchar(void);

void nop(void);

#endif
