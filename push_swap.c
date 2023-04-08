/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:56:23 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/08 05:18:44 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push__swap(int size, t_stack *s)
{
	int	range;

	range = 8.5 + (size * 0.055);
	if (size == 2)
		sa(s);
	else if (size == 3)
		sort_three(s);
	else if (size == 5)
		sort_five(s);
	else
	{
		push_range(s, range);
		push_max_to_a(s);
	}
}

int	main(int ac, char **av)
{
	t_stack	s;
	t_all	a;
	int		size;

	if (ac <= 1)
		exit(0);
	a.arg = argument(av, ac);
	size = count_arg(a.arg);
	allocate(&s, size);
	a.i = size - 1;
	push_to_stack_a(a.i, &s, a.arg);
	duplicated(s.stack_a, size);
	if (sorted(&s, size))
		return (0);
	a.arr = numbers_rank(&s, size);
	index_stack(&a, &s, size);
	push__swap(size, &s);
}
