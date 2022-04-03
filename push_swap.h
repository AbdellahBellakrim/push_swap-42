/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:50:09 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/03 15:50:34 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
// ----------------------------------------
# include <libc.h>
# include "./libft/libft.h"
// ----------------------------------------
typedef struct s_args
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		list_len;
}t_args;
// ---------------------------------------- utils
t_list		*store_args(char **tab);
int			ft_strcmp(char *s1, char *s2);
char		*ft_triz(char *s, char c);
void		free_function(char **tab);
void		review_args(int ac, char **av, t_args *t);
char		**parsing_args(int ac, char **av);
int			check_digit(char **tab);
void		check_repeat(t_list *list, t_args *t);
void		free_list(t_list *list);
int			check_stored(t_list *list);
//------------------- swap functions
void		swap(t_list **stack, char c);
void		ss(t_list **stack_a, t_list **stack_b);
//-------------------- rotaion from the top to bottom functions
void		top_to_bottom(t_list **stack, char c);
void		rr(t_list **stack_a, t_list **stack_b);
//---------------------------- rotation  from the bottom to top functions
void		bottom_to_top(t_list **stack, char c);
void		rrr(t_list **stack_a, t_list **stack_b);
// --------------------------------------------------- push functions
void		pb(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_a, t_list **stack_b);
//---------------------------------  sorting algorithm
void		print_function(t_list *stack_a, t_list *stack_b);	
void		push_swap(t_args *args);
void		sort_3(t_args *args);
int		find_min(t_args *args);
void		sort_4(t_args *args);
void		sort_5(t_args *args);

#endif