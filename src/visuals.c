/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visuals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:40:40 by ldominiq          #+#    #+#             */
/*   Updated: 2022/03/01 12:38:36 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*convert_base_2(int n)
{
	char	*ans;
	int		i;
	int		j;

	j = 0;
	i = 3;
	ans = malloc(sizeof(char) * 10);
	while (i >= 0)
	{
		if ((n>>i)&1)
			ans[j] = '1';
		else
			ans[j] = '0';
		i--;
		j++;
	}
	return (ans);
}

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
	int	i;

	i = -1;
	printf("======================\n");
	while (++i < a->size)
		printf("%s ", convert_base_2(a->list[i]));
	ft_putstr_fd("A\033[0m | ", 1);
	show_stack_content(a);
	ft_putstr_fd("\n\033[1mB\033[0m | ", 1);
	show_stack_content(b);
	printf("\n======================\n");
}
