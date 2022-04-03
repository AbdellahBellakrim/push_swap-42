/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:49:04 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/03 14:25:46 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int str)
{
	if (str >= 0 && str <= 127)
		return (1);
	else
		return (0);
}
