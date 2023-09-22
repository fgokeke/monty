#include "monty.h"

/**
 * pop - Remove the top element from the stack
 * @stack: Pointer to the stack.
 * @line_number: Line number to pop
 */

void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (argument_file->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);
		total_free_args();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", argument_file->head->n);
}
