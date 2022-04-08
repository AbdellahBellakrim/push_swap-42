/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:54:09 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/08 00:53:18 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*--------------------------------*/
void	top_to_bottom(t_list **stack, char c)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*last_node;

	if (ft_lstsize((*stack)) == 0 || (*stack)->next == NULL)
		exit(1);
	first_node = *stack;
	second_node = first_node->next;
	last_node = ft_lstlast(*stack);
	last_node->next = first_node;
	first_node->next = NULL;
	*stack = second_node;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

/*--------------------------------*/ //rr
void	rr(t_list **stack_a, t_list **stack_b)
{
	top_to_bottom(stack_a, 'r');
	top_to_bottom(stack_b, 'r');
	write(1, "rr\n", 3);
}

// knt hna 