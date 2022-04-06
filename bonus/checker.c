/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:19:01 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 12:42:01 by abellakr         ###   ########.fr       */
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
	review_args(ac, av, &args);
	// if (check_stored(args.stack_a))
	// {
	// 	free_list(args.stack_a);
	// 	exit(0);
	// }
	// else
	// 	push_swap(&args);
}