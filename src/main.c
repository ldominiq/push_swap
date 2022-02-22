/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:33 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/22 13:58:14 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *a, t_stack *b)
{
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
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc > 1)
	{
		is_args_valid(argv, argc - 1);
		a = create_stack();
		b = create_stack();
		if (a == NULL || b == NULL)
			return (1);
		a->list = fill_stack(argv, argc - 1);
		a->size = argc - 1;
		b->list = (int *)malloc(sizeof(int) * argc - 1);
		if (a->list == NULL || b->list == NULL)
			return (1);
		if (!is_args_sorted(a))
			push_swap(a, b);
		free_all(a, b);
	}
	return (0);
}
