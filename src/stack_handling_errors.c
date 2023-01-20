/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handling_errors.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 08:53:54 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/13 10:48:53 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/liberror.h"

void	stack_full_error(void)
{
	write(1, "Stack is full, can't add the element\n", 38);
}

void	stack_empty_error(void)
{
	write(1, "Stack is empty, can't pop anything\n", 36);
}
