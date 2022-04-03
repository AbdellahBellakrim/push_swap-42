/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:07:00 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/03 18:01:25 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//----------------------------------------------
void	push_swap(t_args *args)
{
	if(args->list_len == 2)
		bottom_to_top(&args->stack_a, 'a');
	else if(args->list_len == 3)
		sort_3(args);
	else if(args->list_len == 4)
		sort_4(args);
	else if(args->list_len == 5)
		sort_5(args);
}
//---------------------------------------------- sort 3
void	sort_3(t_args *args)
{
	int first;
	int second;
	int third;

	first = args->stack_a->content;
	second = args->stack_a->next->content;
	third = args->stack_a->next->next->content;
	if(first > second && second < third && third > first)  // cas 1
		swap(&args->stack_a, 'a');
	else if(first > second && second > third && third < first) // cas 2
	{
		swap(&args->stack_a, 'a');
		bottom_to_top(&args->stack_a, 'a');
	}
	else if(first > second && second < third && third < first) // cas 3
		top_to_bottom(&args->stack_a, 'a');
	else if(first < second && second > third && third > first) // cas 4
	{
		swap(&args->stack_a, 'a');
		top_to_bottom(&args->stack_a, 'a');
	}
	else if(first < second && second > third && third < first) // cas 5
		bottom_to_top(&args->stack_a, 'a');
}

//--------------------------------------------- sort 4
void	sort_4(t_args *args) // have problem in min int
{
	int	i;
	int min;

	i = 0;
	min = find_min(args);
	while(i < 4)
	{
		if(args->stack_a->content == min)
		{
			pb(&args->stack_a, &args->stack_b);
			break;
		}
		bottom_to_top(&args->stack_a, 'a');
		i++;
	}
	sort_3(args);
	pa(&args->stack_a, &args->stack_b);
	
}
//--------------------------------------------- sort 5
void	sort_5(t_args *args)
{
	int	i;
	int min;

	i = 0;
	min = find_min(args);
	while(i < 5)
	{
		if(args->stack_a->content == min)
		{
			pb(&args->stack_a, &args->stack_b);
			break;
		}
		else
			top_to_bottom(&args->stack_a, 'a');	
		i++;
	}
	sort_4(args);
	pa(&args->stack_a, &args->stack_b);
	
}
