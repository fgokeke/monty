#include "monty.h"

/**
 * get_file_stream - gets the content of file for execution.
 * @file_name: the file to open and read.
 *
 * Return: Nothing.
 */
void get_file_stream(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", file_name);
		free_argument_file();
		exit(EXIT_FAILURE);
	}
	argument_file->file_stream = fdopen(fd, "r");
	if (argument_file->file_stream == NULL)
	{
		close(fd);
		dprintf(2, "Error: Can't open file %s\n", file_name);
		free_argument_file();
		exit(EXIT_FAILURE);
	}
}
