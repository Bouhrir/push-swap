/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utl4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:28:43 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/07 01:23:15 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*--------ft_strlen----------------*/
size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	if (!c)
		return (0);
	while (c[i] != '\0')
		i++;
	return (i);
}

/*--------atoio_error-----------*/
void	if_not_nmb(char *str, int i)
{
	if (!(str[i] >= '0' && str[i] <= '9'))
		error();
}

void	first_opr(char *str, t_all *a)
{
	if (str[a->i] == '-')
	{
		a->sign = -1;
		a->i++;
		if_not_nmb(str, a->i);
	}
	else if (str[a->i] == '+')
	{
		a->i++;
		if_not_nmb(str, a->i);
	}
}

long	ft_atoi(char	*str)
{
	t_all	a;

	a.res = 0;
	a.sign = 1;
	a.i = 0;
	while ((str[a.i] >= 9 && str[a.i] <= 13) || (str[a.i] == 32))
		a.i++;
	first_opr(str, &a);
	while (str[a.i] == '0')
		a.i++;
	while (str[a.i] && (str[a.i] >= '0' && str[a.i] <= '9'))
	{
		a.res = a.res * 10 + str[a.i] - '0';
		if (a.res == 2147483648 && a.sign == -1)
			return (a.sign * a.res);
		if (a.res > 2147483647)
			error();
		a.i++;
	}
	return (a.sign * a.res);
}
