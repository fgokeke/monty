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
<<<<<<< HEAD
	{
		return;
	}
=======
		return;

>>>>>>> a06bcf26af0c6137b416751e5bd6248fbf0dfb1c
	argument_file->file_instructions->f(&stack_ptr, argument_file->file_line_no);
}
