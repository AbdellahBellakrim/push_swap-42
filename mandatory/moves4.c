/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:58:05 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 17:03:30 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*--------------------------------*/
void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*back1;
	t_list	*back2;

	if (*stack_a == NULL)
		exit(1);
	back1 = (*stack_a)->next;
	back2 = *stack_b;
	if (*stack_b == NULL)
	{
		*stack_b = *stack_a;
		(*stack_b)->next = NULL;
	}
	else
		ft_lstadd_front(stack_b, *stack_a);
	*stack_a = back1;
	write(1, "pb\n", 3);
}

/*--------------------------------*/
void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*back1;
	t_list	*back2;

	if (*stack_b == NULL)
		exit(1);
	back1 = (*stack_b)->next;
	back2 = *stack_a;
	if (*stack_a == NULL)
	{
		*stack_a = *stack_b;
		(*stack_a)->next = NULL;
	}
	else
		ft_lstadd_front(stack_a, *stack_b);
	*stack_b = back1;
	write(1, "pa\n", 3);
}
