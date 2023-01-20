/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:03:40 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/14 00:09:52 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_stack *a)
{
	rotate(a);
	write(1, "ra\n", 4);
}

void	rb(t_stack *b)
{
	rotate(b);
	write(1, "rb\n", 4);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate_two(a, b);
	write(1, "rr\n", 4);
}

void	rra(t_stack *a)
{
	reverse_rotate(a);
	write(1, "rra\n", 5);
}

void	rrb(t_stack *b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 5);
}
