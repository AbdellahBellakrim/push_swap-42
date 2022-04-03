/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:44:15 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/03 15:52:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_args *args)
{
	int min;
	t_list *backup;

	backup = args->stack_a;
	min = backup->content;
	while(backup->next)
	{
		if(min > backup->next->content)
			min = backup->next->content;
		backup = backup->next;
	}
	return(min);
}