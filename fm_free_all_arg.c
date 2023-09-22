#include "monty.h"
/**
 * free_all_argument - to free all arguments.
 *
 * Return: Nothing.
 */

void free_all_argument(void)
{
	close_file_stream();
	free_file_tokens();
	free_argument_file();
}
