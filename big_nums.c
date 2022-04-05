/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_nums.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:54:40 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/05 13:31:51 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_numbers(t_args *args)
{
	index_stack(args->stack_a);
	range(args);
	// print_function(args->stack_a, args->stack_b);
	// printf("\n(%d)\n", args->list_len);
}
//----------------------------------------------------------------
void	index_stack(t_list *stack)
{
	t_list *back1;
	t_list	*back2;
	int	i;

	back1 = stack;
	while(back1 != NULL)
	{
		back2 = stack;
		i = 0;
		while(back2 != NULL)
		{
			if(back1->content > back2->content)
				i++;
			back2 = back2->next;
		}
		back1->index = i;
		back1 = back1->next;
	}
}
//---------------------------------------------------------------- range
void range(t_args *args)
{
	int i;
	int j;

	i = 1;
	if(args->list_len > 5 && args->list_len <= 250)
		j = 15;
	else if(args->list_len > 250)
		j = 25;
	while(ft_lstsize(args->stack_a) != 0)
	{
		if(args->stack_a->index <= i && ft_lstsize(args->stack_b) > 1)
		{
			pb(&args->stack_a, &args->stack_b);
			top_to_bottom(&args->stack_b, 'b');
			i++;
		}
		else if(args->stack_a->index <= i + j)
		{
			pb(&args->stack_a, &args->stack_b);
			i++;
		}
		else 
			top_to_bottom(&args->stack_a, 'a');
		if (ft_lstsize(args->stack_b) > 1)
		{
			if (args->stack_b->index < args->stack_b->next->index)
				swap(&args->stack_b, 'b');
		}
	}
	sort(args);
}
//--------------------------------------------------------- rsort()
void	sort(t_args *args)
{
	int middle;
	int max;
	int i;

	max = args->list_len - 1;
	i = 0;
	while(ft_lstsize(args->stack_b) != 0)
	{
		i = find_max_index(args->stack_b, max);
		while(max > -1)
		{
			middle = (max + 1) / 2;
			if(args->stack_b->index == max)
				break;
			else if(args->stack_b->index != max)
			{
				if(i <= middle)
					top_to_bottom(&args->stack_b, 'b');
				else if(i > middle)
					bottom_to_top(&args->stack_b, 'b');		
			}
		}
		pa(&args->stack_a, &args->stack_b);
		max--;
	}
}
//--------------------------------------------- find max index
int	find_max_index(t_list *stack, int max)
{
	t_list *back;
	int i;

	i = 0;
	back = stack;
	while(back)
	{
		if(back->index == max)
			break;
		i++;
		back = back->next;
	}
	return(i);
}