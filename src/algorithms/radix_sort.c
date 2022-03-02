/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:33:08 by ldominiq          #+#    #+#             */
/*   Updated: 2022/03/02 12:40:31 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Radix sort algorithm using bitwise operators
 * ('>>' (right shift) and '&' (bitwise AND))
 * 
 * @param a 
 * @param b 
 * @param size 
 */
void	radix_sort(t_stack *a, t_stack *b, int size)
{
	int	max_bits;
	int	i;
	int	j;
	int	nb;

	simplify_stack(a);
	max_bits = 0;
	i = -1;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			nb = a->list[0];
			if (((nb >> i) & 1) == 1)
				ra(a, 1);
			else
				pb(a, b);
		}
		while (b->size != 0)
			pa(a, b);
	}
}
