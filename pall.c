#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @num: no used
 * Return: no return
*/
void pall(stack_t **head, unsigned int num)
{
	stack_t *h;
	(void)num;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
