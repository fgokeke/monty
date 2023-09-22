#include "monty.h"
/**
 * mod - checks the remainder two element together
 * @stack: Pointer to the stack
 * @line_number: Line number where the division starts
 * Return: nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_holder1, *temp_holder2;

	(void) stack;
	if (argument_file->stack_len < 2)
	{
		dprintf(2, "L%d: can't substract, stack to short\n", line_number);
		total_free_args();
		exit(EXIT_FAILURE);
	}
	temp_holder1 = argument_file->head;
	temp_holder2 = temp_holder1->next;

	if (temp_holder1->n == 0)
	{
		dprintf(2, "L%d: Division by zeo\n", line_number);
		total_free_args();
		exit(EXIT_FAILURE);
	}

	temp_holder2->n = temp_holder2->n % temp_holder1->n;
	del_stack_node();

	argument_file->stack_len--;
}


