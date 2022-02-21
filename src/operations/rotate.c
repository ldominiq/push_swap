/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:52 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/21 22:03:51 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* Shift up all elements of stack a by 1 */
void	ra(t_stack *a, int print)
{
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->list[0];
		move_up(a);
		a->list[a->size - 1] = tmp;
		if (print)
			ft_putendl_fd("ra", 1);
	}
}

/* Shift up all elements of stack b by 1 */
void	rb(t_stack *b, int print)
{
	int	tmp;

	if (b->size > 1)
	{
		tmp = b->list[0];
		move_up(b);
		b->list[b->size - 1] = tmp;
		if (print)
			ft_putendl_fd("rb", 1);
	}
}

/*  ra and rb at the same time */
void	rr(t_stack *a, t_stack *b)
{
	ra(a, 0);
	rb(b, 0);
	ft_putendl_fd("rr", 1);
}