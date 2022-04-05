/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:44:15 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/05 15:09:40 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//----------------------------------------------- find min
int	find_min(t_args *args)
{
	int		min;
	t_list	*backup;

	backup = args->stack_a;
	min = backup->content;
	while (backup->next)
	{
		if (min > backup->next->content)
			min = backup->next->content;
		backup = backup->next;
	}
	return (min);
}

//--------------------------------------------- find max index
int	find_max_index(t_list *stack, int max)
{
	t_list	*back;
	int		i;

	i = 0;
	back = stack;
	while (back)
	{
		if (back->index == max)
			break ;
		i++;
		back = back->next;
	}
	return (i);
}

//-------------------------------------------- index stack
void	index_stack(t_list *stack)
{
	t_list	*back1;
	t_list	*back2;
	int		i;

	back1 = stack;
	while (back1 != NULL)
	{
		i = 0;
		back2 = stack;
		while (back2 != NULL)
		{
			if (back1->content > back2->content)
				i++;
			back2 = back2->next;
		}
		back1->index = i;
		back1 = back1->next;
	}
}
