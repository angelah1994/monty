#include "monty.h"

/**
  * rotr - ...
  * @stack: ...
  * @line_number: ...
  *
  * Return: ...
  */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = NULL, *last = NULL;
	unsigned int i = 0, length = 0, temp = 0;
	(void) line_number;

	length = count_stack(*stack);

	if (*stack)
	{
		curr = *stack;
		last = *stack;

		while (last->next != NULL)
			last = last->next;

		while (i < (length / 2))
		{
			temp = curr->n;
			curr->n = last->n;
			last->n = temp;
			curr = curr->next;
			last = last->prev;
			++i;
		}
	}
}
