/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:50:56 by ldominiq          #+#    #+#             */
/*   Updated: 2022/03/02 15:14:22 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

/**
 * @brief Check if duplicate values are in stack
 * 
 * @param a 
 * @return int 
 */
int	is_args_duplicate(t_stack *a)
{
	int	i;
	int	j;

	i = -1;
	while (++i < a->size)
	{
		j = i;
		while (++j < a->size)
		{
			if (a->list[i] == a->list[j])
			{
				ft_putendl_fd("Error", 1);
				exit(EXIT_FAILURE);
			}
		}
	}
	return (0);
}

/**
 * @brief Check if args provided are integers
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
 * @param count
 * @param simu 1 if multiple args, 0 if single
 * @return int (1 if true | if false exit)
 */
int	is_args_valid(char **args, int count, int simu)
{
	int			i;
	long int	nb;

	i = -1;
	while (++i < count)
		check_args(args[i + simu]);
	i = -1;
	while (++i < count)
	{
		nb = ft_atol(args[i + simu]);
		if (nb > MAX_INT || nb < MIN_INT)
		{
			ft_putendl_fd("Error", 1);
			exit(EXIT_FAILURE);
		}
	}
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
