#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_file_variables - to hold the stream and line from the file.
 * @file_stream: to read content from the file.
 * @file_line: each line from the file.
 *
 * Description: file variables that will be used throughout the project,
 * they will require memory allocation and freeing.
 */
typedef struct arg_file_variables
{
	FILE *file_stream;
	char *file_line;
	char **file_tokens;
	unsigned int file_line_no;
	int count_tokens;
	instruction_t *file_instructions;
	stack_t *head;
	int stack_len;
} arg_file;

extern arg_file *argument_file;
void check_arg(int ac);
void init_arg_file(void);
void get_file_stream(char *file_name);
void tokenize_file_line(void);
void get_file_instruction(void);
void execute_instruction(void);
void error_instruction(void);
void free_file_tokens(void);
void close_file_stream(void);
int is_numeric(char *str);
void free_argument_file(void);
void free_stack(stack_t *head);
void free_head(void);
void total_free_args(void);


void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
/*void pop(stack_t **stack, unsigned int line_number);*/
void pall(stack_t **stack, unsigned int line_number);
/*void swap(stack_t **stack, unsigned int line_number);*/
/*void add(stack_t **stack, unsigned int line_number);*/
/*void nop(stack_t **stack, unsigned int line_number);*/
/*void sub(stack_t **stack, unsigned int line_number);*/
/*void _div(stack_t **stack, unsigned int line_number);*/
/*void mul(stack_t **stack, unsigned int line_number);*/
/*void mod(stack_t **stack, unsigned int line_number);*/
/*void pchar(stack_t **stack, unsigned int line_number);*/
/*void pstr(stack_t **stack, unsigned int line_number);*/
/*void rotl(stack_t **stack, unsigned int line_number);*/
/*void rotr(stack_t **stack, unsigned int line_number);*/
/*void stack(stack_t **stack, unsigned int line_number);*/
/*void queue(stack_t **stack, unsigned int line_number);*/
#endif
