/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_data_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:54:26 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 13:54:27 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap_bonus.h"
/*-------------------------------*/
t_list	*store_args_bonus(char **tab)
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
	free_function_bonus(tab);
	return (p);
}

/*----------------------------*/
void	free_function_bonus(char **tab)
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
void	free_list_bonus(t_list *list)
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
