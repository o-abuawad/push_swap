void	complex(t_stack *a, t_stack *b)
{
	if(!a || !b || disorder(a) == 1)
		return ;
	if (!assign_index(a))
		return ;
	while(a->size > 3 && disorder() != 1)
	{
		int pivot;
		pivot = getpivot(a->size-1,0);
		partition_b(a,b,privot);
	}
	sortthree(a);
}
