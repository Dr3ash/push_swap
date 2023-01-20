/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libinput.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:13:56 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/13 12:29:07 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBINPUT_H
# define LIBINPUT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libstack.h"
# include "liberror.h"

t_stack		*fill_stack(int argc, char **argv);
int			ft_atoi(const char *str);
void		assign_index(t_stack *stack);
int			is_correct_input(char **av);
int			is_digit(char c);
int			is_sign(char c);
int			string_number_compare(const char *s1, const char *s2);
int			check_input(char **argv);
#endif
