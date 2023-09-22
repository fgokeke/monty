#include "monty.h"

/**
 * stack - Sets the format of the date to a stack (LIFO)
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */

void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	argument_file->stack = 1;
}
