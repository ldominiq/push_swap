/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:12:16 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/28 13:37:37 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	top_min(t_stack *a, int max)
{
	if (a->size == 3)
	{
		if (max == 1)
		{
			sa(a, 1);
			ra(a, 1);
		}
	}
}

void	mid_min(t_stack *a, int max)
{
	if (a->size == 3)
	{
		if (max == 2)
			sa(a, 1);
		else
			ra(a, 1);
	}
	else
		sa(a, 1);
}

void	bot_min(t_stack *a, int max)
{
	if (a->size == 3)
	{
		if (max == 0)
			sa(a, 1);
		rra(a, 1);
	}
}

/**
 * @brief Up to 3 numbers sorting algorithm
 * 
 * @param a 
 * @param b 
 */
void	small_sort(t_stack *a)
{
	int	min;
	int	max;

	min = get_min_pos(a);
	max = get_max_pos(a);
	if (min == 0)
		top_min(a, max);
	else if (min == 1)
		mid_min(a, max);
	else if (min == 2)
		bot_min(a, max);
}
