#include "monty.h"

/**
 * execute_instruction - to execute the instructions
 * from the arguments.
 *
 * Return: Nothing.
 */
void execute_instruction(void)
{
	stack_t *stack_ptr = NULL;

	if (argument_file->count_tokens == 0)
	{
		return;
	}
	argument_file->file_instructions->f(&stack_ptr, argument_file->file_line_no);
}
