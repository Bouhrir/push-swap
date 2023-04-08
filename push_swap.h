/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:58:14 by obouhrir          #+#    #+#             */
/*   Updated: 2023/04/08 05:24:00 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	top_a;
	int	top_b;
}	t_stack;

typedef struct s_all{
	char			*s;
	char			**arg;
	int				*arr;
	int				tmp;
	int				i;
	int				j;
	int				k;
	int				n;
	int				sign;
	long			res;
}	t_all;

long	ft_atoi(char	*str);
char	**ft_split(char	*s, char c);
int		check_sign(char *str);
void	error(void);
void	duplicated(int *nmb, int size);
size_t	ft_strlen(const char *c);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_strdup(const char *s1);
int		sorted(t_stack *s, int size);
int		*numbers_rank(t_stack *p, int size);
int		count_arg(char **split);
char	**argument(char **av, int ac);
void	allocate(t_stack *s, int size);
void	push_to_stack_a(int i, t_stack *s, char **arg);
void	index_stack(t_all *a, t_stack *s, int size);
void	push_range(t_stack *s, int size);
void	pa(t_stack *a);
void	pb(t_stack *b);
void	ra(t_stack	*a);
void	rb(t_stack	*b);
void	rrb(t_stack	*b);
void	rra(t_stack	*b);
void	sa(t_stack *a);
void	sb(t_stack *a);
void	sort_three(t_stack *s);
void	sort_five(t_stack *s);
void	push_max_to_a(t_stack *s);

#endif
// void writestacks(t_stack *s);