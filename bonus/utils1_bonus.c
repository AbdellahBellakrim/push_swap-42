/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:54:32 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 17:58:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

// ----------------------------------- strcmp two strings
int	ft_strcmp_bonus(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

// ----------------------------------- trim a char from a string
char	*ft_triz_bonus(char *s, char c)
{
	unsigned long	i;
	unsigned long	j;
	char			*tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			break ;
		i++;
	}
	tab = malloc(sizeof(char *) * (ft_strlen(s) - i + 1));
	if (!tab)
		return (NULL);
	while (i < ft_strlen(s))
	{
		tab[j] = s[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

// ----------------------------------- check if stack already stored
int	check_stored_bonus(t_list *list)
{
	t_list	*back;

	back = list;
	if (!list)
		return (0);
	while (back->next)
	{
		if (back->content > back->next->content)
			return (0);
		back = back->next;
	}
	return (1);
}
