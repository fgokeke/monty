#include "monty.h"

/**
 * close_file_stream - to close the file stream.
 *
 * Return: Nothing.
 */
void close_file_stream(void)
{
	if (argument_file->file_stream != NULL)
	{
		fclose(argument_file->file_stream);
		argument_file->file_stream = NULL;
	}
}
