#include "monty.h"

/**
 * check_arg - to check if argument is equal to 2.
 * @ac: number of arguments.
 *
 * Return: Nothing
 */
void check_arg(int ac)
{
	if (ac == 2)
		return;
	
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
