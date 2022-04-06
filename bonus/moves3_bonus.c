/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:54:06 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 13:54:07 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap_bonus.h"

/*--------------------------------*/
void	bottom_to_top_bonus(t_list **stack, char c)
{
	t_list	*first_node;
	t_list	*last_node;
	t_list	*back1;
	t_list	*back2;

	if ((*stack)->next == NULL)
		exit(1);
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
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

/*--------------------------------*/
void	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next == NULL || (*stack_b)->next == NULL)
		exit(1);
	bottom_to_top_bonus(stack_a, 'r');
	bottom_to_top_bonus(stack_b, 'r');
	write(1, "rrr\n", 4);
}
