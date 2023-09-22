#include "monty.h"

/**
 * free_stack - to free the elements of a stack list.
 * @head: pointer to the list.
 *
 * Return: Nothing.
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}

/**
 * free_head - to free memory for head.
 *
 * Return: Nothing.
 */
void free_head(void)
{
	if (argument_file->head)
	{
		free_stack(argument_file->head);
	}

	argument_file->head = NULL;
}

/**
 * free_argument_file - to free memory allocated for arguments.
 *
 * Return: Nothing.
 */
void free_argument_file(void)
{
	if (argument_file == NULL)
	{
		return;
	}
	if (argument_file->file_instructions)
	{
		free(argument_file->file_instructions);
		argument_file->file_instructions = NULL;
	}
	free_head();
	if (argument_file->file_line)
	{
		free(argument_file->file_line);
		argument_file->file_line = NULL;
	}
	free(argument_file);
}
