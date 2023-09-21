#include "monty.h"

/**
 * is_numeric - to know if a string represents a valid integer.
 * @str: the string to be considered.
 *
 * Return: 1 if a valid integer, 0 if not.
 */
int is_numeric(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		if (idx == 0 && str[idx] == '-' && str[idx + 1])
		{
			idx++;
			continue;
		}
		if (str[idx] < '0' || str[idx] > '9')
			return (0);
		idx++;
	}
	return (1);
}
