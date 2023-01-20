/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:23:23 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/15 10:00:00 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libstack.h"

void	rotate_two(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
}

void	reverse_rotate(t_stack *a)
{
	int	elem;
	int	ind;
	int	i;

	if (a->top > 0)
	{
		i = a->top - 1;
		elem = a->data[i];
		ind = a->index[i];
		while (i > 0)
		{
				a->data[i] = a->data[i - 1];
				a->index[i] = a->index[i - 1];
				i--;
		}
		a->data[0] = elem;
		a->index[0] = ind;
	}
}

void	reverse_rotate_two(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}

void	free_stack(t_stack *a)
{
	free(a->data);
	free(a->index);
	free(a);
}
