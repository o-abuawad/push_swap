static void	sorter(t_stack *a)
{
	int first;
	int	second;
	int	third;

	first = a->head->index;
	second = a->head->next->index;
	third = a->head->next->next-> index;
	if(first > second && first > third)
	{
		ra(a);
		if(a->head->index > a->head->next->index)
			sa(a);
	}

	else if(second > first && second > third)
	{
		rra(a);
		if(a->head->index > a->head->next->index)
			sa(a);
	}
	else if(first > second)
		sa(a);
}

void sortthree(t_stack *a)
{
	if(!a || a->size < 2 || !a->head || !a->head->next)
		return ;
	if(a->size == 2)
	{
		if(a->head->index > a->head->next->index)
			sa(a);
		return ;
	}
	if(a->size >=3 && a->head->next->next)
		sorter(a);
}

void	partition_b(t_stack *a,t_stack *b,int pivot)
{
	int count;

	if(!a || !b || !a->head || a->size <= 0)
		return ;
	count = a->size;
	while(count > 0)
	{
		if(pivot > a->head->index)
			pb(a,b);
		else
			ra(a);
		count--;
	}
}
int	getpivot(int maxind, int minind)
{
	if(maxind < minind)
		return(minind);
	return(minind + (maxind - minind)/2);
}
