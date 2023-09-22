#include "monty.h"

/**
 * free_file_tokens - to free memeroy for file tokens.
 *
 * Return: Nothing.
 */
void free_file_tokens(void)
{
	int idx = 0;

	if (argument_file->file_tokens == NULL)
<<<<<<< HEAD
	{
		return;
	}
	while (argument_file->file_tokens[idx])
	{
		free(argument_file->file_tokens[idx]);
		idx++;
	}
=======
		return;

	while (argument_file->file_tokens[idx])
	{
		free(argument_file->file_tokens[idx]);
		idx++;
	}
>>>>>>> a06bcf26af0c6137b416751e5bd6248fbf0dfb1c
	free(argument_file->file_tokens);
	argument_file->file_tokens = NULL;
}
