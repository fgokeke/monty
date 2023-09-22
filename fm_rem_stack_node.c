#include "monty.h"
/**
 * del_stack_node - deletes node at the top
 * Return: Nothing
 */

void del_stack_node(void)
{
	stack_t *temp;

	temp = argument_file->head;
	argument_file->head = temp->next;
	free(temp);
}
