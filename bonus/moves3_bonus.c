/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:54:06 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/08 00:52:55 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

/*--------------------------------*/
int	bottom_to_top_bonus(t_list **stack)
{
	t_list	*first_node;
	t_list	*last_node;
	t_list	*back1;
	t_list	*back2;

	if (ft_lstsize((*stack)) == 0 || (*stack)->next == NULL)
		return (0);
	back1 = *stack;
	back2 = *stack;
	first_node = *stack;
	last_node = ft_lstlast(*stack);
	while (back1->next)
	{
		back2 = back1;
		back1 = back1->next;
	}
	back2->next = NULL;
	last_node->next = first_node;
	*stack = last_node;
	return (1);
}

/*--------------------------------*/
int	rrr_bonus(t_list **stack_a, t_list **stack_b)
{
	bottom_to_top_bonus(stack_a);
	bottom_to_top_bonus(stack_b);
	return (1);
}
