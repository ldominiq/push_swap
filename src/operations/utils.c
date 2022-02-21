/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:48 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/21 21:42:28 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* Shift all elements up once */
void	move_up(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size)
		stack->list[i] = stack->list[i + 1];
}

/* Shift all elements down once */
void	move_down(t_stack *stack)
{
	int	i;

	i = stack->size + 1;
	while (--i > 0)
		stack->list[i] = stack->list[i - 1];
}
