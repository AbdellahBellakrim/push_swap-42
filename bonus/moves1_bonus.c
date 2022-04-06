/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:53:50 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 17:48:32 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

/*--------------------------------*/
int	swap_bonus(t_list **stack)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;

	if ((*stack)->next == NULL)
		return (0);
	first_node = *stack;
	second_node = first_node->next;
	third_node = second_node->next;
	second_node->next = first_node;
	first_node->next = third_node;
	*stack = second_node;
	return (1);
}

/*--------------------------------*/ //ss
int	ss_bonus(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_b)->next == NULL || (*stack_a)->next == NULL)
		return (0);
	swap_bonus(stack_a);
	swap_bonus(stack_b);
	return (1);
}
