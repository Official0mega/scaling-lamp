/*
 * File_name: push.c
 * Created: 23th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: monty
 * Status: submitted.
 */

#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the file where the opcode is encountered.
 * @data: Array of strings containing the command line arguments.
 */
void push(stack_t **stack, unsigned int line_number, char **data)
{
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    if (!data || !data[1])
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        free(new_node);
        exit(EXIT_FAILURE);
    }

    new_node->n = atoi(data[1]);
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;

    *stack = new_node;
}


/**
 * pall - Prints all the values on the stack (or queue).
 * @stack: Pointer to the top of the stack (or queue).
 * @line_number: Line number in the file where the opcode is encountered.
 */
void pall(stack_t **stack, unsigned int line_number)
{
        stack_t *current = *stack;

        (void)line_number; /* Unused parameter */

        /* Print all values on the stack */
        while (current)
        {
                printf("%d\n", current->n);
                current = current->next;
        }
}
