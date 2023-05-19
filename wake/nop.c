#include <stdio.h>
#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the file where the opcode is encountered.
 */
void nop(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    /* Do nothing */
}

