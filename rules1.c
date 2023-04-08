/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:37:56 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/08 05:18:21 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack	*b)
{
	int	first;
	int	i;

	i = 0;
	first = b->stack_b[i];
	while (i <= b->top_b)
	{
		b->stack_b[i] = b->stack_b[i + 1];
		i++;
	}
	b->stack_b[i - 1] = first;
	write(1, "rrb\n", 4);
}

void	rra(t_stack	*b)
{
	int	first;
	int	i;

	i = 0;
	first = b->stack_a[i];
	while (i <= b->top_a)
	{
		b->stack_a[i] = b->stack_a[i + 1];
		i++;
	}
	b->stack_a[i - 1] = first;
	write(1, "rra\n", 4);
}

void	sa(t_stack *a)
{
	int	tmp;

	tmp = a->stack_a[a->top_a];
	a->stack_a[a->top_a] = a->stack_a[a->top_a - 1];
	a->stack_a[a->top_a - 1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *a)
{
	int	tmp;

	tmp = a->stack_b[a->top_b];
	a->stack_b[a->top_b] = a->stack_b[a->top_b - 1];
	a->stack_b[a->top_b - 1] = tmp;
	write(1, "sb\n", 3);
}
