/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_little_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:39:42 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 01:10:20 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_two(t_stack *a)
{
	if (!check_sorted(a))
		sa(a);
}

void	sort_three(t_stack *a)
{
	int	highest;
	int	i;

	i = 0;
	highest = 0;
	if (!check_sorted(a))
	{
		while (i < 3)
		{
			if (a->index[i] > highest)
				highest = a->index[i];
			i++;
		}
		if (a->index[0] == highest)
			ra(a);
		else if (a->index[1] == highest)
			rra(a);
		if (a->index[0] > a->index[1])
			sa(a);
	}
}

void	sort_five(t_stack *a)
{
	t_stack	*b;

	b = initialize(a->size - 3);
	printf("%d", a->size);
	while (b->top < b->size)
	{
		printf("%d", a->index[0]);
		if ((a->index[0] < 3))
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	if (check_sorted(b))
		sb(b);
	while (b->top != 0)
		pa(b, a);
	free_stack(b);
}
