/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:44:58 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/18 01:16:33 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_sorted(t_stack *a)
{
	int	i;
	int	sorted;

	sorted = 1;
	i = 0;
	while (i < a->size - 1)
	{
		if (a->index[i] > a->index[i + 1])
			sorted = 0;
		i++;
	}
	return (sorted);
}

void	print_stack_cancellare(t_stack *a)
{
	int	i;

	i = 0;
	printf("\n\n");
	while (i < a->size)
	{
		printf("%d     %d\n", a->data[i], a->index[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		return (0);
	if (!check_input(argv))
		return (0); //da modificare gli errori
	a = fill_stack(argc, argv);
	assign_index(a);
	print_stack_cancellare(a);
	if (!check_sorted(a))
	{
		if (a->size == 2)
			sort_two(a);
		else if (a->size == 3)
			sort_three(a);
		else if (a->size == 5)
			sort_five(a);
		else if (a->size > 3)
			sort_big(a);
		print_stack_cancellare(a);
	}
	else
		printf("already sorted");
	free_stack(a);
}
