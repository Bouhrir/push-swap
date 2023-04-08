/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:13:43 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/07 21:38:41 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *b)
{
	if (b->top_a < 0)
		return ;
	b->top_b++;
	b->stack_b[b->top_b] = b->stack_a[b->top_a];
	b->top_a--;
	write(1, "pb\n", 3);
}

void	pa(t_stack *a)
{
	if (a->top_b < 0)
		return ;
	a->top_a++;
	a->stack_a[a->top_a] = a->stack_b[a->top_b];
	a->top_b--;
	write(1, "pa\n", 3);
}

void	ra(t_stack	*a)
{
	int	first;
	int	i;

	i = a->top_a;
	if (i <= 0)
		return ;
	first = a->stack_a[i];
	while (i > 0)
	{
		a->stack_a[i] = a->stack_a[i - 1];
		i--;
	}
	a->stack_a[0] = first;
	write(1, "ra\n", 3);
}

void	rb(t_stack	*b)
{
	int	first;
	int	i;

	i = b->top_b;
	if (i <= 0)
		return ;
	first = b->stack_b[i];
	while (i > 0)
	{
		b->stack_b[i] = b->stack_b[i - 1];
		i--;
	}
	b->stack_b[0] = first;
	write(1, "rb\n", 3);
}
