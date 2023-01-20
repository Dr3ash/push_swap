/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:28:38 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/16 00:30:08 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libstack.h"

int	pop(t_stack *a)
{
	int	elem;
	int	i;

	elem = 0;
	i = 0;
	if (a->top > 0)
	{
		elem = a->data[0];
		while (i < a->size - 1)
		{
			a->data[i] = a->data[i + 1];
			a->index[i] = a->index[i + 1];
			i++;
		}
		a->data[a->top] = 0;
		a->index[a->top] = -1;
		a->top--;
		return (elem);
	}
	stack_empty_error();
	return (-1);
}

void	push(t_stack *from, t_stack *to)
{
	int	elem;
	int	ind;

	ind = from->index[0];
	elem = pop(from);
	if (to->size == 1)
	{
		to->data[0] = elem;
		to->top++;
	}
	else
		add_element(elem, to);
	to->index[0] = ind;
}

void	swap(t_stack *stack)
{
	int	elem;
	int	ind;

	if (stack->top > 1)
	{
		elem = stack->data[0];
		ind = stack->index[0];
		stack->data[0] = stack->data[1];
		stack->index[0] = stack->index[1];
		stack->data[1] = elem;
		stack->index[1] = ind;
	}
}

void	swap_two(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}

void	rotate(t_stack *stack)
{
	int	elem;
	int	ind;
	int	i;

	i = 0;
	if (stack->top > 1)
	{
		elem = stack->data[0];
		ind = stack->index[0];
		while (i < stack->top)
		{
			stack->data[i] = stack->data[i + 1];
			stack->index[i] = stack->index[i + 1];
			i++;
		}
		stack->data[stack->top - 1] = elem;
		stack->index[stack->top - 1] = ind;
	}
}
