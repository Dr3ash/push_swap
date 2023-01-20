/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:55:28 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 01:26:50 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	adjust_rr_to_pb(t_stack *a, t_stack *b, int ind)
{
	int	closest;
	int	i;

	closest = find_closest(b, a->index[ind]);
	i = b->index[closest];
	if ((ind < a->top / 2))
	{
		if ((a->index[ind] > i) && (closest > b->top / 2))
		{
			while ((a->index[0] != i) || (b->index[0] != i))
				rr(a, b);
		}
		else if ((a->index[ind] < i) && (closest > b->top / 2))
		{
			while ((a->index[0] != i) || (b->index[b->top] != i))
				rr(a, b);
		}
	}
}

static void	adjust_rrr_to_pb(t_stack *a, t_stack *b, int ind)
{
	int	closest;
	int	i;

	closest = find_closest(b, a->index[ind]);
	i = b->index[closest];
	if ((ind > a->top / 2))
	{
		if ((a->index[ind] > i) && (closest < b->top / 2))
		{
			while ((a->index[0] != i) || (b->index[0] != i))
				rrr(a, b);
		}
		else if ((a->index[ind] < i) && (closest < b->top / 2))
		{
			while ((a->index[0] != i) || (b->index[b->top] != i))
				rrr(a, b);
		}
	}
}

static void	adjust_a_to_pb(t_stack *a, int ind)
{
	int	i;

	i = a->index[ind];
	if (ind < a->top / 2)
	{
		while (a->index[0] != i)
			ra(a);
	}
	else
	{
		while (a->index[0] != i)
			rra(a);
	}
}

static void	adjust_b_to_pb(t_stack *b, int elem)
{
	int	closest;
	int	i;

	closest = find_closest(b, elem);
	i = b->index[closest];
	if ((elem > i) && (closest > b->top / 2))
	{
		while (b->index[0] != i)
			rb(b);
	}
	else if ((elem > i) && (closest < b->top / 2))
	{
		while (b->index[0] != i)
			rrb(b);
	}
	else if ((elem < i) && (closest > b->top / 2))
	{
		while (b->index[b->top] != i)
			rb(b);
	}
	else
	{
		while (b->index[b->top] != i)
			rrb(b);
	}
}

void	rotate_a_b_to_pb(t_stack *a, t_stack *b, int ind)
{
	int	elem;

	elem = a->index[ind];
	adjust_rr_to_pb(a, b, ind);
	adjust_rrr_to_pb(a, b, ind);
	adjust_a_to_pb(a, ind);
	adjust_b_to_pb(b, elem);
}
