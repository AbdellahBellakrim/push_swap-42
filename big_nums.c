/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_nums.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:54:40 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/05 15:14:58 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//---------------------------------------------  sort big numbers
void	sort_big_numbers(t_args *args)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (args->list_len > 5 && args->list_len <= 250)
		j = 15;
	else if (args->list_len > 250)
		j = 25;
	index_stack(args->stack_a);
	range(args, i, j);
}

//---------------------------------------------------------------- range
void	range(t_args *args, int i, int j)
{
	while (ft_lstsize(args->stack_a) != 0)
	{
		if (args->stack_a->index <= i && ft_lstsize(args->stack_b) > 1)
		{
			pb(&args->stack_a, &args->stack_b);
			top_to_bottom(&args->stack_b, 'b');
			i++;
		}
		else if (args->stack_a->index <= i + j)
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
	int	middle;
	int	max;
	int	i;

	max = args->list_len - 1;
	i = 0;
	while (ft_lstsize(args->stack_b) != 0)
	{
		i = find_max_index(args->stack_b, max);
		while (max > -1)
		{
			middle = (max + 1) / 2;
			if (args->stack_b->index == max)
				break ;
			else if (args->stack_b->index != max)
			{
				if (i <= middle)
					top_to_bottom(&args->stack_b, 'b');
				else if (i > middle)
					bottom_to_top(&args->stack_b, 'b');
			}
		}
		pa(&args->stack_a, &args->stack_b);
		max--;
	}
}
