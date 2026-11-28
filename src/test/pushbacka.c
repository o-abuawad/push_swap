static int	findbigest(t_stack *b)
{
	t_node *curr;
	int maxind;
	int	maxpos;
	int	i;

	if(!b || !b->head)
		return(0);
	curr = b->head;
	maxind = curr->index;
	maxpos=0;
	i=0;
	while(curr)
	{
		if(curr->index > maxind)
		{
			maxind = curr-> index;
			maxpos=i;
		}
		curr= curr->next;
		i++;
	}
	return(maxpos);
}
static void movemaxtop(t_stack *b, int pos)
{
	int	moves;
	if (pos <= b->size / 2)
		while(pos > 0)
		{
			rb(b);
			pos--;
		}
	else
	{
		moves = (b->size - pos);
		while(moves > 0)
		{
			rrb(b);
			moves--;
		}
	}
}
void	push_backa(t_stack *a, t_stack *b)
{
	int	pos;

	if(!a || !b)
		return ;
	while(b->size > 0 && b->head)
	{
		pos = findbigest(b);
		movemaxtop(b,pos);
		pa(a,b);
	}
}
