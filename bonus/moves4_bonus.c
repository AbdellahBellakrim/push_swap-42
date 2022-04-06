/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves4_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:54:11 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 13:54:12 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap_bonus.h"

/*--------------------------------*/
void	pb_bonus(t_list **stack_a, t_list **stack_b)
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
void	pa_bonus(t_list **stack_a, t_list **stack_b)
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
