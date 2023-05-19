#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the file where the opcode is encountered.
 */
void add(stack_t **stack, unsigned int line_number)
{
    stack_t *top1, *top2;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    top1 = *stack;
    top2 = (*stack)->next;

    top2->n += top1->n;

    *stack = top2;
    top2->prev = NULL;
    free(top1);
}

