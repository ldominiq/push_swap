/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:39 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/21 22:01:16 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* Swap two elements */
void	swap(int *s1, int *s2)
{
	int	tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

/* Swap the first 2 elements at the top of stack a */
void	sa(t_stack *stack, int print)
{
	if (stack->size > 1)
	{
		swap(&stack->list[0], &stack->list[1]);
		if (print)
			ft_putendl_fd("sa", 1);
	}
}

/* Swap the first 2 elements at the top of stack b */
void	sb(t_stack *stack, int print)
{
	if (stack->size > 1)
	{
		swap(&stack->list[0], &stack->list[1]);
		if (print)
			ft_putendl_fd("sb", 1);
	}
}

/* Sa and sb at the same time */
void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sb(b, 0);
	ft_putendl_fd("ss", 1);
}
