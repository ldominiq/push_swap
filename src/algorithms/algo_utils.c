/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:40:52 by ldominiq          #+#    #+#             */
/*   Updated: 2022/03/01 10:59:21 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Get the stack's min number position
 * 
 * @param stack 
 * @return int 
 */
int	get_min_pos(t_stack *stack)
{
	int	i;
	int	pos;
	int	min;

	i = 0;
	pos = 0;
	min = stack->list[0];
	while (i < stack->size)
	{
		if (min > stack->list[i])
		{
			pos = i;
			min = stack->list[i];
		}
		i++;
	}
	return (pos);
}

/**
 * @brief Get the stack's max number position
 * 
 * @param stack 
 * @return int 
 */
int	get_max_pos(t_stack *stack)
{
	int	i;
	int	pos;
	int	max;

	i = 0;
	pos = 0;
	max = stack->list[0];
	while (i < stack->size)
	{
		if (max < stack->list[i])
		{
			pos = i;
			max = stack->list[i];
		}
		i++;
	}
	return (pos);
}

/**
 * @brief Copy src values into dst
 * 
 * @param dst 
 * @param src 
 * @param len 
 */
void	arraycpy(int *dst, int *src, int len)
{
	int	i;

	i = -1;
	while (++i < len)
		dst[i] = src[i];
}

/**
 * @brief Sorts stack values in a duplicate array
 * 
 * @param a 
 * @return int* (sorted values)
 */
int	*sort_stack(t_stack *a)
{
	int	tmp;
	int	i;
	int	j;
	int	*cpy;

	tmp = 0;
	i = -1;
	cpy = malloc(sizeof(int) * a->size);
	arraycpy(cpy, a->list, a->size);
	while (++i < a->size)
	{
		j = i;
		while (++j < a->size)
		{
			if (cpy[i] > cpy[j])
			{
				tmp = cpy[i];
				cpy[i] = cpy[j];
				cpy[j] = tmp;
			}
		}
	}
	return (cpy);
}

/**
 * @brief Simplifies stack instead of using original values
 * 
 * @param a 
 */
void	simplify_stack(t_stack *a)
{
	int	*cpy;
	int	i;
	int	j;

	cpy = sort_stack(a);
	i = -1;
	while (++i < a->size)
		printf("cpy[%d]: %d\n", i, cpy[i]);
	i = -1;
	while (++i < a->size)
	{
		j = -1;
		while (++j < a->size)
		{
			if (a->list[i] == cpy[j])
				a->list[i] = j;
		}
	}
	free(cpy);
}
