/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:43:13 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 13:48:44 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ----------------------------------- strcmp two strings
int	ft_strcmp(char *s1, char *s2)
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
char	*ft_triz(char *s, char c)
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
int	check_stored(t_list *list)
{
	t_list	*back;

	back = list;
	while (back->next)
	{
		if (back->content > back->next->content)
			return (0);
		back = back->next;
	}
	return (1);
}
