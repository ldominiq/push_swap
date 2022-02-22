/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <ldominiq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:39:04 by ldominiq          #+#    #+#             */
/*   Updated: 2022/02/22 13:56:30 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h" 

typedef struct s_stack
{
	int	size;
	int	*list;
}				t_stack;

// swap

void	sa(t_stack *stack, int print);
void	sb(t_stack *stack, int print);
void	ss(t_stack *a, t_stack *b);

// push

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

// rotate

void	ra(t_stack *a, int print);
void	rb(t_stack *b, int print);
void	rr(t_stack *a, t_stack *b);

// reverse

void	rra(t_stack *a, int print);
void	rrb(t_stack *b, int print);
void	rrr(t_stack *a, t_stack *b);

// utils

void	move_up(t_stack *stack);
void	move_down(t_stack *stack);

// free

void	free_all(t_stack *a, t_stack *b);

// visuals

void	show_stacks(t_stack *a, t_stack *b);

// stack handler

t_stack	*create_stack(void);
int		*fill_stack(char **values, int nb);

// args handler

int		is_args_valid(char **args, int count);
int		is_args_sorted(t_stack *a);

#endif