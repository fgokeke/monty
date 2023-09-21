#include "monty.h"

/**
 * free_file_tokens - to free memeroy for file tokens.
 *
 * Return: Nothing.
 */
void free_file_tokens(void)
{
	int idx = 0;

	if (argument_file->file_tokens != NULL)
	{
		while (argument_file->file_tokens[idx])
		{
			free(argument_file->file_tokens[idx]);
			idx++;
		}
		free(argument_file->file_tokens);
		argument_file->file_tokens = NULL;
	}
}
