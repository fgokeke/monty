#include "monty.h"

/**
 * total_free_args - completely frees allocated memory.
 *
 * Return: Nothing.
 */
void total_free_args(void)
{
	close_file_stream();
	free_file_tokens();
	free_argument_file();
}
