/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:34:21 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 09:51:53 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*static void	final_rotations(t_stack *a)
{
	int	ind;

	ind = exist(1, a);
	while (a->index[0] != 1 && !check_sorted(a))
	{
		if (a->index[0] > a->index[1])
			sa(a);
		if (ind > a->size / 2)
			rra(a);
		else
			ra(a);
	}
}*/

void	sort_big(t_stack *a)
{
	t_stack	*b;
	int		cheapest;

	b = initialize(a->size);
	pb(a, b);
	pb(a, b);
	while (a->top > 3)
	{
		cheapest = calculate_cheapest_to_push(a, b);
		printf("%d", cheapest);
		//rotate_a_b_to_pb(a, b, cheapest);
		pb(a, b);
	}
	sort_three(a);
	while (a->top < a->size)
	{
		//prepare_a_to_pa(a, b);
		pa(b, a);
	}
	//final_rotations(a);
	free_stack(b);
}
