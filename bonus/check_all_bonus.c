/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:53:41 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 13:53:42 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap_bonus.h"

/*------------------------------*/
int	check_digit_bonus(char **tab)
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
void	check_repeat_bonus(t_list *list, t_checker *t)
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
				free_list_bonus(list);
				exit(1);
			}
			back2 = back2->next;
		}
		back1 = back1->next;
	}
	t->list_len = ft_lstsize(list);
	if (t->list_len == 1)
	{
		free_list_bonus(list);
		exit(1);
	}
}
