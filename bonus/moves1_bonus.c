/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:53:50 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 13:53:51 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap_bonus.h"

/*--------------------------------*/
void	swap_bonus(t_list **stack, char c)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;

	if ((*stack)->next == NULL)
		exit(1);
	first_node = *stack;
	second_node = first_node->next;
	third_node = second_node->next;
	second_node->next = first_node;
	first_node->next = third_node;
	*stack = second_node;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
}

/*--------------------------------*/ //ss
void	ss_bonus(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_b)->next == NULL || (*stack_a)->next == NULL)
		exit(1);
	swap_bonus(stack_a, 's');
	swap_bonus(stack_b, 's');
	write(1, "ss\n", 3);
}
