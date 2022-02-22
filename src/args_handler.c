/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:50:56 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/22 13:56:23 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

/**
 * @brief 
 * 
 * @param arg 
 * @return int 
 */
void	check_args(char *arg)
{
	int	i;

	i = -1;
	while (arg[++i])
	{
		if ((arg[i] == '-' && ft_isdigit(arg[i + 1])))
			i++;
		else if (ft_isdigit(arg[i]))
			continue ;
		else
		{
			ft_putendl_fd("Error", 1);
			exit(EXIT_FAILURE);
		}
	}
}

/**
 * @brief Check if args provided are valid (integers)
 * 
 * @param args
 * @return int (1 if true | 0 if false and exit)
 */
int	is_args_valid(char **args, int count)
{
	int	i;

	i = -1;
	while (++i < count)
		check_args(args[i + 1]);
	return (1);
}

/**
 * @brief Check if stack is sorted (smallest to biggest)
 * 
 * @param a (stack a)
 * @return int (1 if true | 0 if false)
 */
int	is_args_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->list[i] > a->list[i + 1])
			return (0);
		i++;
	}
	return (1);
}
