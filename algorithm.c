/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:59:26 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/07 21:17:56 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_max_to_a(t_stack *s)
{
	int	i;

	while (s->top_b + 1)
	{
		i = 0;
		while (s->stack_b[i] != s->top_b)
			i++;
		if (i < s->top_b / 2)
		{
			while (s->stack_b[s->top_b] != s->top_b)
				rrb(s);
		}
		if (i >= s->top_b / 2)
		{
			while (s->stack_b[s->top_b] != s->top_b)
				rb(s);
		}
		pa(s);
	}
}

void	push_range(t_stack *s, int range)
{
	int	i;

	i = 0;
	while (s->top_a + 1)
	{
		if (s->stack_a[s->top_a] > i && s->stack_a[s->top_a] < range + i)
		{
			pb(s);
			i++;
		}
		else if (s->stack_a[s->top_a] <= i)
		{
			pb(s);
			rb(s);
			i++;
		}
		else
			ra(s);
	}
}
