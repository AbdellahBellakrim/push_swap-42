/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:39:49 by abellakr          #+#    #+#             */
/*   Updated: 2022/03/28 18:04:28 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*------------------------------*/
int	check_digit(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 1;
		if (((tab[i][0] != '+' && tab[i][0] != '-') \
		|| (tab[i][1] == '\0')) && (ft_isdigit(tab[i][0]) == 0))
			return (0);
		while (tab[i][j])
		{
			if (ft_isdigit(tab[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*------------------------------*/
void	check_repeat(t_list *list, t_args *t)
{
	t_list	*back1;
	t_list	*back2;

	back1 = list;
	while (back1->next)
	{
		back2 = back1;
		while (back2->next)
		{
			if (back1->content == back2->next->content)
			{
				write (2, "error", 5);
				free_list(list);
				exit(1);
			}
			back2 = back2->next;
		}
		back1 = back1->next;
	}
	t->list_len = ft_lstsize(list);
	if (t->list_len == 1)
	{
		free_list(list);
		exit(1);
	}
}
