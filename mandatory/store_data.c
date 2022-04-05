/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:47:43 by abellakr          #+#    #+#             */
/*   Updated: 2022/03/21 12:33:45 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*-------------------------------*/
t_list	*store_args(char **tab)
{
	int		i;
	t_list	*p;

	p = NULL;
	i = 1;
	p = ft_lstnew(ft_atoi(tab[0]));
	while (tab[i])
	{
		ft_lstadd_back(&p, ft_lstnew(ft_atoi(tab[i])));
		i++;
	}
	free_function(tab);
	return (p);
}

/*----------------------------*/
void	free_function(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

/*----------------------------*/
void	free_list(t_list *list)
{
	t_list	*back;

	back = list;
	if (list)
	{
		while (list)
		{
			back = list->next;
			free(list);
			list = back;
		}
	}
}
