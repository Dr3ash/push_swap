/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_pos_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:30:47 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 00:08:36 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	get_max_ind_b(t_stack *b)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < b->top)
	{
		if (b->index[i] > b->index[max])
			max = i;
		i++;
	}
	return (max);
}

static int	get_min_ind_b(t_stack *b)
{
	int	i;
	int	min;

	i = 1;
	min = 0;
	while (i < b->top)
	{
		if (b->index[i] < b->index[min])
			min = i;
		i++;
	}
	return (min);
}

int	find_best_position_in_b(int elem, t_stack *b)
{
	int	b_max;
	int	b_min;
	int	closest;

	b_max = get_max_ind_b(b);
	b_min = get_min_ind_b(b);
	if (elem > b->index[b_max])
		return (b_max - 1);
	else if (elem < b->index[b_min])
		return (b_min + 1);
	else
	{
		closest = find_closest(b, elem);
		if (elem > b->index[closest])
			return (closest - 1);
		else
			return (closest + 1);
	}
}
