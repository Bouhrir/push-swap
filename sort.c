/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:02:38 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/08 05:34:43 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *s)
{
	if (!(s->stack_a[0] == 2))
	{
		if (s->stack_a[0] == 1)
		{
			rra(s);
			if (s->stack_a[0] == 0)
				rra(s);
		}
		else
		{
			ra(s);
			if (s->stack_a[0] == 1)
				ra(s);
		}
	}
	if (s->stack_a[s->top_a] > s->stack_a[s->top_a - 1])
		sa(s);
}

void	sort_five(t_stack *s)
{
	while (s->stack_a[s->top_a] <= 2)
		ra(s);
	pb(s);
	while (s->stack_a[s->top_a] <= 2)
		ra(s);
	pb(s);
	if (s->stack_b[s->top_b] > s->stack_b[s->top_b - 1])
		sb(s);
	sort_three(s);
	pa(s);
	ra(s);
	pa(s);
	ra(s);
}
