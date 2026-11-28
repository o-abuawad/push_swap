#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static void	print_stack(t_stack *s, const char *name)
{
	t_node	*curr;

	printf("%s (size %d): ", name, s->size);
	curr = s->head;
	while (curr)
	{
		printf("[%d|idx:%d] ", curr->val, curr->index);
		curr = curr->next;
	}
	printf("\n");
}

static int	fill_stack_a(t_stack *a, int argc, char **argv)
{
	int		i;
	t_node	*node;
	t_node	*last;

	i = 1;
	last = NULL;
	while (i < argc)
	{
		node = malloc(sizeof(t_node));
		if (!node)
			return (0);
		node->val = atoi(argv[i]);
		node->index = -1;
		node->next = NULL;
		if (!a->head)
			a->head = node;
		else
			last->next = node;
		last = node;
		a->size++;
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	a.head = NULL;
	a.size = 0;
	b.head = NULL;
	b.size = 0;
	if (!fill_stack_a(&a, argc, argv))
		return (1);
	print_stack(&a, "Before A");
	complex(&a, &b);
	print_stack(&a, "After A");
	print_stack(&b, "After B");
	free_stack(&a);
	free_stack(&b);
	return (0);
}
void	sortthree(t_stack *a);
void	partition_b(t_stack *a,t_stack *b,int pivot);
int	getpivot(int maxind, int minind);
void	push_backa(t_stack *a, t_stack *b);
int	main(int argc, char **argv);
void	complex(t_stack *a, t_stack *b);
int	assign_index(t_stack *a);
