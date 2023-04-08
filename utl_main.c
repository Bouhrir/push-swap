/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:33:24 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/07 21:36:34 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_arg(char **split)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (split[x])
	{
		while (split[x][i])
			i++;
		x++;
	}
	return (x);
}

char	**argument(char **av, int ac)
{
	int		i;
	char	**arg;
	char	*str;

	i = 1;
	str = ft_strdup(" ");
	while (i < ac)
	{
		if (!ft_strlen(av[i]))
			error();
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
		i++;
	}
	arg = ft_split(str, ' ');
	free(str);
	return (arg);
}

void	allocate(t_stack *s, int size)
{
	s->stack_a = malloc(size * sizeof(int));
	s->stack_b = malloc(size * sizeof(int));
	s->top_a = -1;
	s->top_b = -1;
}

void	push_to_stack_a(int i, t_stack *s, char **arg)
{
	while (i >= 0)
	{	
		s->top_a++;
		s->stack_a[s->top_a] = ft_atoi(arg[i]);
		if (s->stack_a[s->top_a] > INT_MAX || s->stack_a[s->top_a] < INT_MIN
			|| check_sign(arg[i]) == 0)
			error();
		i--;
	}
}

void	index_stack(t_all *a, t_stack *s, int size)
{
	a->i = 0;
	a->j = 0;
	while (a->i < size)
	{
		a->j = 0;
		while (a->j < size && s->stack_a[a->i] != a->arr[a->j])
			a->j++;
		if (s->stack_a[a->i] == a->arr[a->j])
			s->stack_a[a->i] = a->j;
		a->i++;
	}
}
