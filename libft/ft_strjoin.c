/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:19:45 by abellakr          #+#    #+#             */
/*   Updated: 2022/03/12 22:10:56 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*p_str;

	if (!s1 || !s2)
		return (NULL);
	if (*s1 && !*s2)
		return ((char *)s1);
	else if (!*s1 && *s2)
		return ((char *)s2);
	else if (!*s1 && !*s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	p_str = str;
	if (str)
	{
		while (*s1)
			*str++ = *s1++;
		while (*s2)
			*str++ = *s2++;
		*str = 0;
		return (p_str);
	}
	return (NULL);
}
