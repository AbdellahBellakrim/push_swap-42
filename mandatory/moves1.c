/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 20:21:04 by abellakr          #+#    #+#             */
/*   Updated: 2022/03/26 19:36:01 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*--------------------------------*/
void	swap(t_list **stack, char c)
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
void	ss(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_b)->next == NULL || (*stack_a)->next == NULL)
		exit(1);
	swap(stack_a, 's');
	swap(stack_b, 's');
	write(1, "ss\n", 3);
}
