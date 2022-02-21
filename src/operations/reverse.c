/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:56 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/21 22:15:10 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* Shift down all elements of stack a by 1 */
void	rra(t_stack *a, int print)
{
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->list[a->size - 1];
		move_down(a);
		a->list[0] = tmp;
		if (print)
			ft_putendl_fd("rra", 1);
	}
}

/* Shift down all elements of stack b by 1 */
void	rrb(t_stack *b, int print)
{
	int	tmp;

	if (b->size > 1)
	{
		tmp = b->list[b->size - 1];
		move_down(b);
		b->list[0] = tmp;
		if (print)
			ft_putendl_fd("rrb", 1);
	}
}

/*  rra and rrb at the same time */
void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_putendl_fd("rrr", 1);
}