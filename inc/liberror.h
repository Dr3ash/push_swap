/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liberror.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:01:09 by alenzini          #+#    #+#             */
/*   Updated: 2023/01/13 11:25:31 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBERROR_H
# define LIBERROR_H

# include <stdlib.h>
# include <unistd.h>

void	stack_full_error(void);
void	stack_empty_error(void);
void	number_out_of_range_error(void);
#endif
