/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:12:16 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/24 01:22:09 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	get_max_pos(t_stack *stack)
{
	int	i;
	int pos;
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

void	top_min(t_stack *a, int max)
{
	
}

void	small_sort(t_stack *a, t_stack *b)
{
	int	min;
	int	max;
	(void) b;

	min = get_min_pos(a);
	max = get_max_pos(a);
	if (min == 0)
		top_min(a, max);
	else if (min == 1)
		mid_min(a, max);
	else if (min == 2)
		bot_min(a, max);
	//printf("min: %d | max: %d\n", min, max);
}