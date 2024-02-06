/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:39:30 by louis.demet       #+#    #+#             */
/*   Updated: 2023/12/04 12:47:31 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*populate_list(int argc, char **argv, t_list *a)
{
	int	i;

	i = 1;
	if (argc == 2)
	{
		while (is_nbr(argv[1]))
		{
			parse_one_number(&argv[1], &a);
			if (!a)
				break ;
		}
	}
	else
	{
		while (i < argc)
		{
			parse_one_number(&argv[i++], &a);
			if (!a)
				break ;
		}
	}
	return (a);
}

t_list	*init_a(int argc, char **argv)
{
	t_list	*a;

	if (!arguments_ok(argv))
		return (0);
	a = 0;
	a = populate_list(argc, argv, a);
	if (!is_list_ok(a))
	{
		ft_lstclear(&a);
		return (0);
	}
	remove_negatives(a);
	set_incremental_values(a);
	return (a);
}

void	print_instructions(t_list **a, t_list *instrs)
{
	if (*a && is_sorted(*a) && !instrs)
		;
	else if (instrs)
	{
		ft_lstiter(instrs, print_single_instruction);
		ft_lstclear(&instrs);
	}
	else
		ft_putstr("Error\n");
	if (*a)
		ft_lstclear(a);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*instrs;

	if (argc < 2)
		return (0);
	a = init_a(argc, argv);
	if (ft_lstsize(a) <= 10)
		instrs = insertion_sort(&a);
	else
		instrs = radix_sort(&a);
	print_instructions(&a, instrs);
	return (0);
}
