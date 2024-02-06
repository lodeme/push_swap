/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:51:39 by louis.demet       #+#    #+#             */
/*   Updated: 2023/12/04 12:47:13 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

// Main
t_list		*populate_list(int argc, char **argv, t_list *a);
t_list		*init_a(int argc, char **argv);
void		print_instructions(t_list **a, t_list *instrs);
int			main(int argc, char **argv);

// Utility functions
void		ft_putstr(char *s);
int			is_sorted(t_list *lst);
t_list		*ft_lstbeforelast(t_list *lst);
void		return_null(long long **lnbr);
void		ft_atoi_ptr(char **nptr, long long **lnbr);
int			find_min(t_list *lst);
int			find_max(t_list *lst);
t_list		*find_max_ptr(t_list *lst);
t_list		*find_min_ptr(t_list *lst);
int			find_pos(t_list *lst, int needle);
void		print_single_instruction(int content);
int			arguments_ok(char **argv);
int			duplicate_found(t_list *lst);
int			is_list_ok(t_list *lst);
int			is_nbr(char *str);
void		set_incremental_values(t_list *lst);
void		remove_negatives(t_list *lst);
void		parse_one_number(char **str, t_list **a);

// Algorithms
int			get_nradix_elements(t_list *a, int shift);
void		push_zeroes_to_b(t_list **a, t_list **b, t_list **instrs, \
																	int shift);
void		push_all_to_a(t_list **a, t_list**b, t_list **instrs);
int			get_max_bits(t_list *a);
t_list		*radix_sort(t_list **a);
void		sort_two(t_list **a, t_list **b, t_list **instrs);
void		sort_three(t_list **a, t_list **b, t_list **instrs);
void		push_min_to_b(t_list **a, t_list **b, t_list **instrs);
void		push_back_to_a(t_list **a, t_list **b, t_list **instrs);
t_list		*insertion_sort(t_list **a);

// Core instructions
void		swap(t_list **lst);
void		push(t_list **a, t_list **b);
void		rotate(t_list **lst);
void		reverse_rotate(t_list **lst);

// Top level instructions
void		sa(t_list **a, t_list **b, t_list **instrs);
void		sb(t_list **a, t_list **b, t_list **instrs);
void		ss(t_list **a, t_list **b, t_list **instrs);
void		pa(t_list **a, t_list **b, t_list **instrs);
void		pb(t_list **a, t_list **b, t_list **instrs);
void		ra(t_list **a, t_list **b, t_list **instrs);
void		rb(t_list **a, t_list **b, t_list **instrs);
void		rr(t_list **a, t_list **b, t_list **instrs);
void		rra(t_list **a, t_list **b, t_list **instrs);
void		rrb(t_list **a, t_list **b, t_list **instrs);
void		rrr(t_list **a, t_list **b, t_list **instrs);

// sorting algorithms
t_list		*radix_sort(t_list **a);
t_list		*insertion_sort(t_list **a);

#endif