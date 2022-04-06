/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:19:01 by abellakr          #+#    #+#             */
/*   Updated: 2022/04/06 16:41:20 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_checker	args;

	if (ac == 1)
		exit(1);
	args.stack_a = NULL;
	args.stack_b = NULL;
	review_args_bonus(ac, av, &args);
	check_instructions(&args);

	// t_list *back1;

	// back1 = args.stack_a;
	// while (back1)
	// {
	// 	printf("%d\n", back1->content);
	// 	back1 = back1->next;
	// }
}
//-------------------------------------------
void	check_instructions(t_checker *args)
{
	char *line;

	line = get_next_line(0);
	while(line)
	{
		if (ft_strncmp(line, "sa\n", 3) == 0) // sa
			swap_bonus(&args->stack_a);
		else if (ft_strncmp(line, "sb\n", 3) == 0) // sb
			swap_bonus(&args->stack_b);
		else if (ft_strncmp(line, "ss\n", 3) == 0) // ss
			ss_bonus(&args->stack_a, &args->stack_b);
		else if(ft_strncmp(line, "ra\n", 3) == 0) // ra
			top_to_bottom_bonus(&args->stack_a);
		else if(ft_strncmp(line, "rb\n", 3) == 0) // rb
			top_to_bottom_bonus(&args->stack_b);
		else if(ft_strncmp(line, "rr\n", 3) == 0) // rr
			rr_bonus(&args->stack_a, &args->stack_b);
		else if(ft_strncmp(line, "rra\n", 4) == 0) // rra
			bottom_to_top_bonus(&args->stack_a);
		else if(ft_strncmp(line, "rrb\n", 4) == 0) // rrb
			bottom_to_top_bonus(&args->stack_b);
		else if(ft_strncmp(line, "rrr\n", 4) == 0) // rrr
			rrr_bonus(&args->stack_a, &args->stack_b);
		else if (ft_strncmp(line, "pb\n", 3) == 0) // pb
			pb_bonus(&args->stack_a, &args->stack_b);
		else if (ft_strncmp(line, "pa\n", 3) == 0) // pa
			pa_bonus(&args->stack_a, &args->stack_b);
		else
			{
				write(1, "Error\n", 6);
				free(line);
				exit(1);
			}
		free(line);
		line = get_next_line(0);
	}
	if(check_stored_bonus(args->stack_a) == 1 && args->stack_b == NULL)
		write(1, "OK\n", 3);
	else if(check_stored_bonus(args->stack_a) == 0)
		write(1, "KO\n", 3);
}
