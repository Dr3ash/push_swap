/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 09:43:24 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/15 10:22:45 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTACK_H
# define LIBSTACK_H

# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "liberror.h"

typedef struct s_stack
{
	int	size;
	int	top;
	int	*data;
	int	*index;
}	t_stack;

t_stack	*initialize(unsigned int dim);
void	free_stack(t_stack *a);
int		get_size(t_stack *stack);
void	add_element(int element, t_stack *a);
int		pop(t_stack *a);
void	push(t_stack *from, t_stack *to);
void	swap(t_stack *stack);
void	swap_two(t_stack *a, t_stack *b);
void	rotate(t_stack *stack);
void	rotate_two(t_stack *a, t_stack *b);
void	reverse_rotate(t_stack *a);
void	reverse_rotate_two(t_stack *a, t_stack *b);
#endif
