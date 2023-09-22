#include "monty.h"

/**
 * main - entry point for monty interpreter.
 * @ac: number of command line arguments.
 * @av: array of command line argument strings.
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
int main(int ac, char **av)
{
	size_t nread = 0;

	check_arg(ac);
	init_arg_file();
	get_file_stream(av[1]);
	while (getline(&argument_file->file_line, &nread,
				argument_file->file_stream) != -1)
	{
		argument_file->file_line_no += 1;
		tokenize_file_line();
		get_file_instruction();
		execute_instruction();
		free_file_tokens();
	}
	close_file_stream();
	free_argument_file();

	return (0);
}
