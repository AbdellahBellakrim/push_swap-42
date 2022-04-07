/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:21:05 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/07 17:00:32 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*------------------------------*/
char	**parsing_args(int ac, char **av)
{
	char	*tab;
	char	*str1;
	char	*str2;
	char	**args;
	int		index;

	tab = ft_strtrim(av[1], " ");
	if (!tab)
		return (NULL);
	str1 = ft_strjoin(tab, " ");
	free(tab);
	index = 2;
	while (index < ac)
	{
		tab = ft_strtrim(av[index], " ");
		str2 = ft_strjoin(str1, tab);
		free(str1);
		free(tab);
		index++;
		str1 = ft_strjoin(str2, " ");
		free(str2);
	}
	args = ft_split(str1, ' ');
	free(str1);
	return (args);
}

/*------------------------------*/
void	review_args(int ac, char **av, t_args *t)
{
	char	**tab;

	tab = parsing_args(ac, av);
	if (!tab || !*tab)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (check_digit(tab) == 0)
	{
		write(2, "Error\n", 6);
		free_function(tab);
		exit(1);
	}
	t->stack_a = store_args(tab);
	if (t->stack_a == NULL)
		exit(1);
	check_repeat(t->stack_a, t);
}
