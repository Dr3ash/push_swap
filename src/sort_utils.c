/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:01:45 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 00:15:48 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	exist(int elem, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->top)
	{
		if (elem == stack->index[i])
			return (i);
		i++;
	}
	return (0);
}

static int	find_upper(int elem, t_stack *b)
{
	int	i;

	i = elem;
	while (i < b->size)
	{
		if (exist(i, b) > 0)
		{
			i = b->index[exist(i, b)];
			break ;
		}
		i++;
	}
	return (i);
}

static int	find_lower(int elem, t_stack *b)
{
	int	i;

	i = elem;
	while (i > 0)
	{
		if (exist(i, b) > 0)
		{
			i = b->index[exist(i, b)];
			break ;
		}
		i--;
	}
	return (i);
}

int	find_closest(t_stack *stack, int elem)
{
	int	upper;
	int	lower;

	upper = find_upper(elem, stack);
	lower = find_lower(elem, stack);
	if ((upper - elem) >= (elem - lower))
		return (exist(upper, stack));
	else
		return (exist(lower, stack));
}
