/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:26:44 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/17 11:21:07 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	calculate_cost_in_b(int ind, t_stack *b)
{
	int	closest;
	int	cost;

	closest = find_closest(b, b->index[ind]);
	if ((b->index[ind] > b->index[closest]) && (closest > b->top / 2))
		cost = closest + 1;
	else if ((b->index[ind] < b->index[closest]) && (closest > b->top / 2))
		cost = closest + 3;
	else
		cost = b->top - closest + 2;
	return (cost);
}

int	calculate_cheapest_to_push(t_stack *a, t_stack *b)
{
	int		index_cheapest;
	int		lowest_cost;
	int		i;
	int		index_best_pos;

	i = 0;
	lowest_cost = INT_MAX;
	while (i < a->top)
	{
		index_best_pos = find_best_position_in_b(a->index[i], b);
		if (calculate_cost_in_b(index_best_pos, b) < lowest_cost)
			index_cheapest = a->index[i];
		i++;
	}
	return (index_cheapest);
}
