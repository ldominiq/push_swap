/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visuals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:40:40 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/22 13:56:37 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	show_stack_content(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size)
	{
		ft_putnbr_fd(stack->list[i], 1);
		ft_putstr_fd(" ", 1);
	}
	if (i == 0)
		ft_putstr_fd("Empty", 1);
}

void	show_stacks(t_stack *a, t_stack *b)
{
	printf("======================\n");
	ft_putstr_fd("A\033[0m | ", 1);
	show_stack_content(a);
	ft_putstr_fd("\n\033[1mB\033[0m | ", 1);
	show_stack_content(b);
	printf("\n======================\n");
}
