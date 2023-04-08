/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utl1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:15:07 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/08 05:19:00 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*----------split_error------------*/
int	count(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
			{
				i++;
			}
			word++;
		}
		if (word == 0)
			error();
	}
	return (word);
}

static long	size(char const	*s, char c, int i)
{
	int	ct;

	ct = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		ct++;
	}
	return (ct);
}

static void	sp(const char *s, char	**res, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			res[j] = (char *)malloc((size(s, c, i) + 1) * sizeof(char));
			if (!res[j])
				return ;
			while (s[i] && s[i] != c)
			{
				res[j][k++] = s[i++];
			}
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
}

char	**ft_split(char	*s, char c)
{
	char	**res;

	res = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	sp(s, res, c);
	return (res);
}

/*--------write----------------*/
// void writestacks(t_stack *s)
// {
// 	int i = s->top_a;
// 	printf("-----A-----\n");
// 	while(i >= 0)
// 		printf("%d\n", s->stack_a[i--]);
// 	printf("-----B-----\n");
// 	i = s->top_a;
// 	while (i >= 0)
// 		printf("%d\n", s->stack_b[i--]);
// }
