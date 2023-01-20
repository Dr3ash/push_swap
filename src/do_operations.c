/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:54:59 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/14 00:57:13 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(t_stack *a)
{
	swap(a);
	write(1, "sa\n", 4);
}

void	sb(t_stack *b)
{
	swap(b);
	write(1, "sb\n", 4);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 4);
}

void	pa(t_stack *b, t_stack *a)
{
	push(b, a);
	write(1, "pa\n", 4);
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
	write(1, "pb\n", 4);
}
