/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utl3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:28:00 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/07 01:21:49 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*--------errors----------------*/
void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	sorted(t_stack *s, int size)
{
	int	i;
	int	x;

	i = size - 1;
	x = 1;
	while (i)
	{
		if (s->stack_a[i] > s->stack_a[i - 1])
			x = 0;
		i--;
	}
	return (x);
}

int	check_sign(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	duplicated(int *nmb, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if (nmb[i] == nmb[j])
				error();
			j++;
		}
		i++;
	}
}
