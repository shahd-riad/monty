#include "monty.h"
/**
 * fpintf - prints the top
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void fpintf(stack_t **head, unsigned int num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n",num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
