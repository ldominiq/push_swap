/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:38:33 by ldominiq          #+#    #+#             */
/*   Updated: 2022/03/02 15:15:23 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *a, t_stack *b)
{
	if (a->size <= 3)
		small_sort(a);
	else if (a->size <= 5)
		medium_sort(a, b);
	else
		radix_sort(a, b, a->size);
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
		if (argc == 2)
			single_arg(a, b, argv[1]);
		if (argc >= 3)
			multiple_args(a, b, argc, argv);
		if (!is_args_duplicate(a))
		{
			if (!is_args_sorted(a))
				push_swap(a, b);
		}
		free_all(a, b);
	}
	return (0);
}
