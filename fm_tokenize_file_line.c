#include "monty.h"

/**
 * tokenize_file_line - to break each line into tokens.
 *
 * Return: Nothing.
 */
void tokenize_file_line(void)
{
	int idx = 0;
	char *file_linecpy = NULL, *file_line_delim = " \n", *file_token = NULL;

	file_linecpy = malloc(sizeof(char) * (strlen(argument_file->file_line) + 1));
	strcpy(file_linecpy, argument_file->file_line);
	argument_file->count_tokens = 0;
	file_token = strtok(file_linecpy, file_line_delim);
	while (file_token)
	{
		argument_file->count_tokens += 1;
		file_token = strtok(NULL, file_line_delim);
	}
	argument_file->file_tokens = malloc(sizeof(char *) *
			(argument_file->count_tokens + 1));
	strcpy(file_linecpy, argument_file->file_line);
	file_token = strtok(file_linecpy, file_line_delim);
	while (file_token)
	{
		argument_file->file_tokens[idx] = malloc(sizeof(char) *
				(strlen(file_token) + 1));
		if (argument_file->file_tokens[idx] == NULL)
		{
			dprintf(2, "Error: malloc failed\n");
			free_argument_file();
			exit(EXIT_FAILURE);
		}
		strcpy(argument_file->file_tokens[idx], file_token);
		file_token = strtok(NULL, file_line_delim);
		idx++;
	}
	argument_file->file_tokens[idx] = NULL;
	free(file_linecpy);
}
