#include "monty.h"

/**
 * pint - print the data at the top of the stack.
 * @stack: pointer to the list.
 * @line_number: the line in the file.
 */
void pint(stack_t **stack, unsigned int line_number)
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
