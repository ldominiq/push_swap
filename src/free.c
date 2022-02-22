/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:36:05 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/22 12:26:37 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

/**
 * @brief Free desired stack
 * 
 * @param stack 
 */
void	free_stack(t_stack *stack)
{
	free(stack->list);
	stack->list = NULL;
	free(stack);
	stack = NULL;
}

/**
 * @brief Free stacks a and b
 * 
 * @param a stack a
 * @param b stack b
 */
void	free_all(t_stack *a, t_stack *b)
{
	free_stack(a);
	free_stack(b);
}
