/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:33 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/21 22:32:24 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	*fill_stack(char **values, int nb)
{
	int	i;
	int	*tmp;

	tmp = malloc(nb * sizeof(int));
	if (tmp)
	{
		i = 1;
		while (i <= nb)
		{
			tmp[i - 1] = ft_atoi(values[i]);
			i++;
		}
	}
	return (tmp);
}

void	free_stack(t_stack *stack)
{
	free(stack->list);
	stack->list = NULL;
	free(stack);
	stack = NULL;
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
	printf("======================\n");
	ft_putstr_fd("A\033[0m | ", 1);
	show_stack_content(a);
	ft_putstr_fd("\n\033[1mB\033[0m | ", 1);
	show_stack_content(b);
	printf("\n======================\n");
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc > 1)
	{
		a = create_stack();
		b = create_stack();
		if (a == NULL || b == NULL)
			return (1);
		a->list = fill_stack(argv, argc - 1);
		a->size = argc - 1;
		b->list = (int *)malloc(sizeof(int) * argc - 1);
		if (a->list == NULL)
			return (1);
		show_stacks(a, b);
		sa(a, 1);
		show_stacks(a, b);
		pb(a, b);
		pb(a, b);
		pb(a, b);
		show_stacks(a, b);
		rr(a, b);
		show_stacks(a, b);
		rrr(a, b);
		show_stacks(a, b);
		sa(a, 1);
		show_stacks(a, b);
		pa(a, b);
		pa(a, b);
		pa(a, b);
		show_stacks(a, b);
		free_stack(a);
		free_stack(b);
	}
	return (0);
}
