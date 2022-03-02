/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:16:00 by ldominiq          #+#    #+#             */
/*   Updated: 2022/03/02 15:17:02 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	single_arg(t_stack *a, t_stack *b, char *arg)
{
	char	**tmp;
	int		i;
	int		j;

	tmp = ft_split(arg, ' ');
	i = 0;
	while (tmp[i])
		i++;
	is_args_valid(tmp, i, 0);
	a->list = fill_stack(tmp, i, 0);
	j = -1;
	while (tmp[++j])
		free(tmp[j]);
	free(tmp);
	a->size = i;
	b->list = (int *)malloc(sizeof(int) * i);
	if (a->list == NULL || b->list == NULL)
	{
		free_all(a, b);
		exit(EXIT_FAILURE);
	}
}

void	multiple_args(t_stack *a, t_stack *b, int count, char **args)
{
	is_args_valid(args, count - 1, 1);
	a->list = fill_stack(args, count - 1, 1);
	a->size = count - 1;
	b->list = (int *)malloc(sizeof(int) * count - 1);
	if (a->list == NULL || b->list == NULL)
	{
		free_all(a, b);
		exit(EXIT_FAILURE);
	}
}