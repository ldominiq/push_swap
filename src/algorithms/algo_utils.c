/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:40:52 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/28 13:37:00 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Get the stack's min number position
 * 
 * @param stack 
 * @return int 
 */
int	get_min_pos(t_stack *stack)
{
	int	i;
	int	pos;
	int	min;

	i = 0;
	pos = 0;
	min = stack->list[0];
	while (i < stack->size)
	{
		if (min > stack->list[i])
		{
			pos = i;
			min = stack->list[i];
		}
		i++;
	}
	return (pos);
}

/**
 * @brief Get the stack's max number position
 * 
 * @param stack 
 * @return int 
 */
int	get_max_pos(t_stack *stack)
{
	int	i;
	int	pos;
	int	max;

	i = 0;
	pos = 0;
	max = stack->list[0];
	while (i < stack->size)
	{
		if (max < stack->list[i])
		{
			pos = i;
			max = stack->list[i];
		}
		i++;
	}
	return (pos);
}
