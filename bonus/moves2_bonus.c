/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:53:56 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 16:20:36 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

/*--------------------------------*/
void	top_to_bottom_bonus(t_list **stack)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*last_node;

	if ((*stack)->next == NULL)
		exit(1);
	first_node = *stack;
	second_node = first_node->next;
	last_node = ft_lstlast(*stack);
	last_node->next = first_node;
	first_node->next = NULL;
	*stack = second_node;
}

/*--------------------------------*/ //rr
void	rr_bonus(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next == NULL || (*stack_b)->next == NULL)
		exit(1);
	top_to_bottom_bonus(stack_a);
	top_to_bottom_bonus(stack_b);
}

// knt hna 