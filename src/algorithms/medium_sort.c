/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:40:19 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/28 13:38:41 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	medium_sort(t_stack *a, t_stack *b)
{
	int	i;

	while (!is_args_sorted(a))
	{
		i = 0;
		while (i < 2)
		{
			if (a->list[0] > a->list[1])
			{
				pb(a, b);
				i++;
			}
			else
				ra(a, 1);
		}
		small_sort(a);
		while (b->size)
			pa(a, b);
		if (a->list[0] > a->list[1])
			sa(a, 1);
		while (a->list[a->size - 1] < a->list[0])
			ra(a, 1);
	}
}
