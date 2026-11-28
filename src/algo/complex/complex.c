void	arrange(int *maxind,int *minind ,t_stack *a)
{
	t_node *curr;

	if(!maxind || !minind || !a || !a->head)
		return ;
	curr = a->head;
	*maxind = a->head->index;
	*minind = a->head->index;
	while(curr)
	{
		if(curr->index > *maxind)
			*maxind = curr->index;
		if(curr->index < *minind)
			*minind = curr->index;
		curr = curr->next;
	}
}

void	complex(t_stack *a, t_stack *b)
{
	int pivot;
	int	maxind;
	int	minind;

	maxind = 0;
	minind = 0;
	if(!a || !b || disorder(a) == 1)
		return ;
	if (!assign_index(a))
		return ;
	while(a->size > 3 && disorder(a) != 1)
	{
		arrange(&maxind,&minind,a);
		pivot = getpivot(maxind,minind);
		partition_b(a,b,pivot);
	}
	sortthree(a);
	push_backa(a,b);
}
