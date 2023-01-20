/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:41:04 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 01:09:56 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libstack.h"
# include "liberror.h"
# include "libinput.h"

int		check_sorted(t_stack *a);
void	sort_two(t_stack *a);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a);
void	sort_big(t_stack *a);
void	pa(t_stack *b, t_stack *a);
void	pb(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
int		exist(int elem, t_stack *stack);
int		find_closest(t_stack *stack, int elem);
int		find_best_position_in_b(int elem, t_stack *b);
int		calculate_cheapest_to_push(t_stack *a, t_stack *b);
void	rotate_a_b_to_pb(t_stack *a, t_stack *b, int ind);
void	prepare_a_to_pa(t_stack *a, t_stack *b);
#endif
