#include "monty.h"

/**
 * swap - changes the position of the element
 * @stack: Pointer to the stack
 * @line_number: Line number where the changes occur
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_holder1, *temp_holder2;

	(void) stack;
	if (argument_file->stack_len < 2)
	{
		dprintf(2, "L%d: can't swap, stack to short\n", line_number);
		total_free_args();
		exit(EXIT_FAILURE);
	}

	temp_holder1 = argument_file->head;
	temp_holder2 = temp_holder1->next;
	temp_holder1->next = temp_holder2->next;
	if (temp_holder1->next)
	{
		temp_holder1->next->prev = temp_holder1;
	}
	temp_holder2->next = temp_holder1;
	temp_holder1->prev = temp_holder2;
	temp_holder2->prev = NULL;
	argument_file->head = temp_holder2;
}
