/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:46:56 by ldominiq          #+#    #+#             */
/*   Updated: 2022/03/02 15:09:54 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

/**
 * @brief Create a stack object
 * 
 * @return t_stack*
 */
t_stack	*create_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (stack != NULL)
	{
		stack->size = 0;
		stack->list = NULL;
	}
	return (stack);
}

/**
 * @brief Convert char args to int
 * 
 * @param values args values
 * @param nb size of stack
 * @param simu
 * @return int* 
 */
int	*fill_stack(char **values, int nb, int simu)
{
	int	i;
	int	*tmp;

	tmp = malloc(nb * sizeof(int));
	if (tmp)
	{
		i = 1;
		while (i <= nb)
		{
			tmp[i - 1] = ft_atoi(values[simu]);
			i++;
			simu++;
		}
	}
	return (tmp);
}
