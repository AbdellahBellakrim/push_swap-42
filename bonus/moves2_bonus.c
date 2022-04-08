/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:53:56 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/08 00:52:10 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

/*--------------------------------*/
int	top_to_bottom_bonus(t_list **stack)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*last_node;

	if (ft_lstsize((*stack)) == 0 || (*stack)->next == NULL)
		return (0);
	first_node = *stack;
	second_node = first_node->next;
	last_node = ft_lstlast(*stack);
	last_node->next = first_node;
	first_node->next = NULL;
	*stack = second_node;
	return (1);
}

/*--------------------------------*/ //rr
int	rr_bonus(t_list **stack_a, t_list **stack_b)
{
	top_to_bottom_bonus(stack_a);
	top_to_bottom_bonus(stack_b);
	return (1);
}

// knt hna 