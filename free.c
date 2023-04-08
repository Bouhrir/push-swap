/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:43:56 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/08 17:44:33 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *s)
{
	free(s->stack_a);
	free(s->stack_b);
}

void	free_arg(char **arg, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arg[i]);
		i++;
	}
}
