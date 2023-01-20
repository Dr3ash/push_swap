/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_to_pa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:04:22 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 00:09:43 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	closest_on_last(t_stack *a, int closest, int ind)
{
	if (ind > a->top / 2)
	{
		while (a->index[a->top] != closest)
			rra(a);
	}
	else
	{
		while (a->index[a->top] != closest)
			ra(a);
	}
}

static void	closest_on_first(t_stack *a, int closest, int ind)
{
	if (ind > a->top / 2)
	{
		while (a->index[0] != closest)
			rra(a);
	}
	else
	{
		while (a->index[0] != closest)
			ra(a);
	}
}

void	prepare_a_to_pa(t_stack *a, t_stack *b)
{
	int	closest;
	int	ind;

	closest = find_closest(a, b->index[0]);
	ind = exist(closest, a);
	if (ind > 0 && a->index[ind] > b->index[0])
	{
		closest_on_first(a, closest, ind);
	}
	else if (ind > 0 && a->index[ind] < b->index[0])
	{
		closest_on_last(a, closest, ind);
	}
}
