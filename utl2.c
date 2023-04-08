/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utl2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:27:26 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/08 17:37:51 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*--------ranking----------------*/
void	swap(t_all v, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		if (v.arr[j] > v.arr[j + 1])
		{	
			v.tmp = v.arr[j];
			v.arr[j] = v.arr[j + 1];
			v.arr[j + 1] = v.tmp;
		}
		j++;
	}
}

int	*numbers_rank(t_stack *p, int size)
{
	t_all	v;
	int		i;

	v.arr = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		v.arr[i] = p->stack_a[i];
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		swap(v, size - 1);
		i++;
	}
	return (v.arr);
}

/*--------ft_strdup----------------*/
char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*--------ft_strjoin----------------*/
char	*ft_strjoin(char	*s1, char	*s2)
{
	char	*p;
	int		i;
	int		j;
	int		x;

	if (!s1 || !s2)
		return (0);
	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!p)
		return (0);
	x = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		p[x++] = s1[i++];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		p[x++] = s2[j++];
	}
	p[x] = '\0';
	free(s1);
	return (p);
}
