#include "monty.h"

/**
 * error_instruction - to handle error for invalid instruction.
 *
 * Return: Nothing
 */
void error_instruction(void)
{
	dprintf(2, "L%d: unknown instruction%s\n",
			argument_file->file_line_no, argument_file->file_tokens[0]);
	close_file_stream();
	free_file_tokens();
	free_argument_file();
	exit(EXIT_FAILURE);
}
