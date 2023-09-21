#include "monty.h"

/**
 * pall - to print the member of the stack.
 * @stack: pointer to the stack data structure.
 * @line_number: line number in the file to consider.
 *
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	if (argument_file->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	ptr = argument_file->head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
