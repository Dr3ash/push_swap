/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:01:20 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/15 10:00:00 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libinput.h"

t_stack	*fill_stack(int argc, char **argv)
{
	t_stack		*a;
	int			num;
	int			i;

	a = initialize(argc - 1);
	num = 0;
	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			number_out_of_range_error();
		else
			add_element(num, a);
		i++;
	}
	return (a);
}

static int	find_next_min(t_stack *stack)
{
	int	i;
	int	lowest_pos;
	int	min;

	i = 0;
	min = INT_MAX;
	lowest_pos = -1;
	while (i < stack->top)
	{
		if (stack->data[i] <= min && stack->index[i] == -1)
		{
			min = stack->data[i];
			lowest_pos = i;
		}
		i++;
	}
	return (lowest_pos);
}

static int	all_has_index(t_stack *a)
{
	int	i;
	int	ind;

	i = 0;
	ind = 1;
	while (i < a->top)
	{
		if (a->index[i] == -1)
			ind = 0;
		i++;
	}
	return (ind);
}

void	assign_index(t_stack *stack)
{
	int	index_count;
	int	min_pos;

	index_count = 1;
	while (!all_has_index(stack))
	{
		min_pos = find_next_min(stack);
		stack->index[min_pos] = index_count;
		index_count++;
	}
}
