/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 09:49:23 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/16 00:32:55 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libstack.h"

t_stack	*initialize(unsigned int dim)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	new->data = malloc(sizeof(int) * dim);
	new->index = malloc(sizeof(int) * dim);
	if (!(new->data) || !(new->index))
		return (NULL);
	new->size = dim;
	new->top = 0;
	return (new);
}

void	add_element(int element, t_stack *a)
{
	int	i;

	i = a->top;
	if (a->top < a->size)
	{
		while (i > 0)
		{
			a->data[i] = a->data[i - 1];
			a->index[i] = a->index[i - 1];
			i--;
		}
		a->data[0] = element;
		a->index[0] = -1;
		a->top++;
	}
	else
		stack_full_error();
}

int	get_size(t_stack *stack)
{
	return (stack->size);
}
