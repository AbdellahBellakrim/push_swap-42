/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:54:18 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 17:09:04 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

/*------------------------------*/
char	**parsing_args_bonus(int ac, char **av)
{
	char	*tab;
	char	*str1;
	char	*str2;
	char	**args;
	int		index;

	tab = ft_strdup(av[1]);
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
void	review_args_bonus(int ac, char **av, t_checker *t)
{
	char	**tab;

	tab = parsing_args_bonus(ac, av);
	if (!tab || !*tab)
	{
		write(2, "error", 5);
		exit(1);
	}
	if (check_digit_bonus(tab) == 0)
	{
		write(2, "error", 5);
		free_function_bonus(tab);
		exit(1);
	}
	t->stack_a = store_args_bonus(tab);
	if (t->stack_a == NULL)
		exit(1);
	check_repeat_bonus(t->stack_a, t);
}
