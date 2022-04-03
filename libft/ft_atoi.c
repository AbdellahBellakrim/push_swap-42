/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:09:53 by abellakr          #+#    #+#             */
/*   Updated: 2022/03/19 14:40:27 by abellakr         ###   ########.fr       */
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

int	check_max(long long number, int signe)
{
	number = number * signe;
	if (number > INT_MAX || number < INT_MIN || len_n(number) > 11)
	{
		write(2, "error", 5);
		exit(0);
	}
	return (number);
}

int	ft_atoi(const char *str)
{
	long long		k;
	int				signe;
	char			*p;

	p = (char *)str;
	signe = 1;
	k = 0;
	if (*p == '+')
		p++;
	if (*p == '-')
	{
		signe = -signe;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		k = k * 10 + (*p - 48);
		p++;
	}
	return (check_max(k, signe));
}
