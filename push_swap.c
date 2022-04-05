/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:49:54 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/05 15:07:50 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*---------------------------------*/
int	main(int ac, char **av)
{
	t_args	args;

	if (ac == 1)
		exit(1);
	args.stack_a = NULL;
	args.stack_b = NULL;
	review_args(ac, av, &args);
	if (check_stored(args.stack_a))
	{
		free_list(args.stack_a);
		exit(0);
	}
	else
		push_swap(&args);
}
