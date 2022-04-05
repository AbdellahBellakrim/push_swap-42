/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delet_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:17:51 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/05 15:19:21 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_function(t_list *stack_a, t_list *stack_b)
{
	t_list	*back1;
	t_list	*back2;

	back1 = stack_a;
	back2 = stack_b;
	printf("\n****************************************\nstack b: \n");
	while (back2 != NULL)
	{
		printf ("%d   |     %d\n", back2->content, back2->index);
		back2 = back2->next;
	}
	printf("\n*****************************************\nstack a: \n");
	while (back1 != NULL)
	{
		printf ("%d     |     %d\n", back1->content, back1->index);
		back1 = back1->next;
	}	
}
