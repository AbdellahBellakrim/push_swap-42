/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:15:49 by abellakr          #+#    #+#             */
/*   Updated: 2022/03/26 19:33:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*current;

	counter = 1;
	current = lst;
	if (!lst)
		return (0);
	while (current->next != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
