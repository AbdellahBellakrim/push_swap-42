/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:43:13 by abellakr          #+#    #+#             */
/*   Updated: 2022/03/26 19:30:50 by abellakr         ###   ########.fr       */
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
	tab = malloc(sizeof(char *) * (strlen(s) - i + 1));
	if (!tab)
		return (NULL);
	while (i < strlen(s))
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

//-------------------------------- fill an int tab with an int element 
int	*fill_tab(int i, int len)
{
	int	j;
	int	*tab;

	j = 0;
	tab = (int *)malloc(len * sizeof(int) + 1);
	if (!tab)
		exit (1);
	while (j < len)
	{
		tab[j] = i;
		j++;
	}
	return (tab);
}

//-------------------------------- reverse list 2 tab
int	*list_to_tab(t_args *var)
{
	int		i;
	int		*tab;
	t_list	*back;

	i = 0;
	back = var->stack_a;
	tab = (int *)malloc(sizeof(int) * var->list_len + 1);
	if (!tab)
		exit(1);
	while (i < var->list_len)
	{
		tab[i] = back->content;
		i++;
		back = back->next;
	}
	tab[i] = '\0';
	return (tab);
}
