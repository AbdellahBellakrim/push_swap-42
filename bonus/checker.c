/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:19:01 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 14:46:18 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_checker	args;

	if (ac == 1)
		exit(1);
	args.stack_a = NULL;
	args.stack_b = NULL;
	review_args_bonus(ac, av, &args);
}
// /--------------------------------------------------------
// void	print_function(t_list *stack_a, t_list *stack_b)
// {
// 	t_list	*back1;
// 	t_list	*back2;

// 	back1 = stack_a;
// 	back2 = stack_b;
// 	printf("\n****************************************\nstack b: \n");
// 	while (back2 != NULL)
// 	{
// 		printf ("%d\n", back2->content);
// 		back2 = back2->next;
// 	}
// 	printf("\n*****************************************\nstack a: \n");
// 	while (back1 != NULL)
// 	{
// 		printf ("%d\n", back1->content);
// 		back1 = back1->next;
// 	}	
// }
