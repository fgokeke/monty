#include "monty.h"

/**
 * push - add an integer to the stack.
 * @stack: pointer to the stack structure.
 * @line_number: the line in the file where you have push.
 *
 * Return: Nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (argument_file->count_tokens <= 1 ||
			!(is_numeric(argument_file->file_tokens[1])))
	{
		free_argument_file();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free_argument_file();
		exit(EXIT_FAILURE);
	}
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(argument_file->file_tokens[1]);

	if (argument_file->head != NULL)
	{
		(*stack)->next = argument_file->head;
		argument_file->head->prev = *stack;
	}
	argument_file->head = *stack;
	argument_file->stack_len += 1;
}
