#include "monty.h"

/**
 * get_file_instruction - to retrieve the
 * instruction from the file.
 *
 * Return: Nothing.
 */
void get_file_instruction(void)
{
	int idx = 0;

	instruction_t f_instruction[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"stack", &stack}, {"nop", &nop},
		{"queue", &queue}, {"add", &add},
		{"pall", &pall}, {NULL, NULL}
	};
	if (argument_file->count_tokens == 0)
	{
		return;
	}
	for (; f_instruction[idx].opcode != NULL; idx++)
	{
		if (strcmp(f_instruction[idx].opcode, argument_file->file_tokens[0]) == 0)
		{
			argument_file->file_instructions->opcode = f_instruction[idx].opcode;
			argument_file->file_instructions->f = f_instruction[idx].f;
			return;
		}
	}
	error_instruction();
}
