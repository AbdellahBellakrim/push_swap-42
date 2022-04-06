/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:19:44 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 14:46:22 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
//--------------------------------
# include <libc.h>
# include "../libft/libft.h"
//---------------------------------
typedef struct checker
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		list_len;
}t_checker;
// ---------------------------------------- utils
t_list		*store_args_bonus(char **tab);
int			ft_strcmp_bonus(char *s1, char *s2);
char		*ft_triz_bonus(char *s, char c);
void		free_function_bonus(char **tab);
void		review_args_bonus(int ac, char **av, t_checker *t);
char		**parsing_args_bonus(int ac, char **av);
int			check_digit_bonus(char **tab);
void		check_repeat_bonus(t_list *list, t_checker *t);
void		free_list_bonus(t_list *list);
//------------------- swap functions
void		swap_bonus(t_list **stack, char c);
void		ss_bonus(t_list **stack_a, t_list **stack_b);
//-------------------- rotaion from the top to bottom functions
void		top_to_bottom_bonus(t_list **stack, char c);
void		rr_bonus(t_list **stack_a, t_list **stack_b);
//---------------------------- rotation  from the bottom to top functions
void		bottom_to_top_bonus(t_list **stack, char c);
void		rrr_bonus(t_list **stack_a, t_list **stack_b);
// --------------------------------------------------- push functions
void		pb_bonus(t_list **stack_a, t_list **stack_b);
void		pa_bonus(t_list **stack_a, t_list **stack_b);
//------------------------------------------------------ check output
//----------------------------------------------------- check check_stored
int			check_stored_bonus(t_list *list);
//------------------------------------------------------ check stack_b if empty
// void	print_function(t_list *stack_a, t_list *stack_b);

#endif
