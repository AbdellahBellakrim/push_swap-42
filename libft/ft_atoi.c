/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:09:53 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/07 21:18:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_n(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		i = 1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
//---------------------------------------

int	check_max(long long number, int signe)
{
	number = number * signe;
	if ((number > INT_MAX || number < INT_MIN) || len_n(number) > 11)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	return (number);
}

//---------------------------------------
int	ft_atoi(char *p)
{
	long long		k;
	int				signe;

	signe = 1;
	k = 0;
	if (*p == '+')
		p++;
	if (*p == '-')
	{
		signe = -signe;
		p++;
	}
	p = ft_trizo(p, '0');
	if (ft_strlen(p) > 11)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (*p >= '0' && *p <= '9')
	{
		k = k * 10 + (*p - 48);
		p++;
	}
	return (check_max(k, signe));
}

//---------------------------------------
char	*ft_trizo(char *s, char c)
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
