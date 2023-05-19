#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the file where the opcode is encountered.
 */
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *top1, *top2;
    int temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    top1 = *stack;
    top2 = (*stack)->next;

    temp = top1->n;
    top1->n = top2->n;
    top2->n = temp;
}

