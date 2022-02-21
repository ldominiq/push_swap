/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:43 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/21 21:45:29 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* Take the first element at the top of b and put it at the top of a */
void	pa(t_stack *a, t_stack *b)
{
	int	tmp;

	if (b->size > 0)
	{
		tmp = b->list[0];
		move_up(b);
		b->size--;
		move_down(a);
		a->list[0] = tmp;
		a->size++;
		ft_putendl_fd("pa", 1);
	}
}

/* Take the first element at the top of a and put it at the top of b */
void	pb(t_stack *a, t_stack *b)
{
	int	tmp;

	if (a->size > 0)
	{
		tmp = a->list[0];
		move_up(a);
		a->size--;
		move_down(b);
		b->list[0] = tmp;
		b->size++;
		ft_putendl_fd("pb", 1);
	}
}
