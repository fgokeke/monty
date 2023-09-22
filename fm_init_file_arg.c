#include "monty.h"

arg_file *argument_file = NULL;
/**
 * init_arg_file - to initialize arguments from file,
 * which is pointer to arg_file structure.
 *
 * Return: Nothing.
 */
void init_arg_file(void)
{
	argument_file = malloc(sizeof(arg_file));
	if (argument_file == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free_argument_file();
		exit(EXIT_FAILURE);
	}
	argument_file->file_instructions = malloc(sizeof(instruction_t));
	if (argument_file->file_instructions == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free_argument_file();
		exit(EXIT_FAILURE);
	}
	argument_file->file_stream = NULL;
	argument_file->file_line = NULL;
	argument_file->file_line_no = 0;
	argument_file->count_tokens = 0;
	argument_file->head = NULL;
	argument_file->stack_len = 0;
	/*argument_file->stack = 1;*/
}
