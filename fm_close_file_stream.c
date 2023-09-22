#include "monty.h"

/**
 * close_file_stream - to close the file stream.
 *
 * Return: Nothing.
 */
void close_file_stream(void)
{
	if (argument_file->file_stream == NULL)
<<<<<<< HEAD
	{
		return;
	}
=======
		return;

>>>>>>> a06bcf26af0c6137b416751e5bd6248fbf0dfb1c
	fclose(argument_file->file_stream);
	argument_file->file_stream = NULL;
}
