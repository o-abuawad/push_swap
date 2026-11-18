#include "push_swap.h"

t_stack do_algo(t_stack *stack_a,t_stack *stack_b,t_options *options)
{
	if (options->mode == SIMPLE)
		selection_sort(stack_a, stack_b);
	else if (options->mode == MEDIUM)
		//MEDIUM();
	else if (options->mode == COMPLEX)
		//COMPLEX();
	else if (options->mode == ADAPTIVE)
		//ADAPTIVE;
	if (options->bench == 1)
		//benchmode();
}

int	main(int argc,char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_options options;

	if(argc < 2)
		return(0);
	stack_a.head = NULL;
	stack_a.size = 0;
	stack_b.head = NULL;
	stack_b.size = 0;
	options.mode = ADAPTIVE;
	options.bench = 0;
	check_arg(argc, argv ,&stack_a);
	do_algo(&stack_a, &stack_b, &options);
	return (0);
}
