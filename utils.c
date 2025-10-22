/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:09:35 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 20:00:31 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr, t_list **list, char **temp)
{
	int		i;
	int		sign;
	long	r;

	i = 0;
	sign = 1;
	r = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
		if (nptr[i] == '\0')
			ft_free_and_exit(list, temp);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		r = (r * 10) + (nptr[i++] - '0');
	if (nptr[i] != '\0' || (r * sign) < -2147483648 || (r * sign) > 2147483647)
		ft_free_and_exit(list, temp);
	return ((int)(r * sign));
}

int	ft_min_cost_a(t_list **a, t_list **b, int min_cost)
{
	t_list	*tmp;
	int		costs;
	int		number;

	tmp = *a;
	while (tmp)
	{
		costs = cost(tmp->number, a) + cost(trgt_b(tmp->number, b), b) + 1;
		if (in_half(tmp->number, a) == in_half(trgt_b(tmp->number, b), b))
		{
			if (cost(tmp->number, a) >= cost(trgt_b(tmp->number, b), b))
				costs = cost(tmp->number, a) + 1;
			else
				costs = cost(trgt_b(tmp->number, b), b) + 1;
		}
		if (costs < min_cost)
		{
			min_cost = costs;
			number = tmp -> number;
		}
		tmp = tmp -> next;
	}
	return (number);
}

int	ft_min_cost_b(t_list **a, t_list **b, int min_cost)
{
	t_list	*tmp;
	int		costs;
	int		number;

	tmp = *b;
	while (tmp)
	{
		costs = cost(tmp->number, b) + cost(trgt_a(tmp->number, a), a) + 1;
		if (in_half(tmp->number, b) == in_half(trgt_a(tmp->number, a), a))
		{
			if (cost(tmp->number, b) >= cost(trgt_a(tmp->number, a), a))
				costs = cost(tmp->number, b) + 1;
			else
				costs = cost(trgt_a(tmp->number, a), a) + 1;
		}
		if (costs < min_cost)
		{
			min_cost = costs;
			number = tmp -> number;
		}
		tmp = tmp -> next;
	}
	return (number);
}

void	ft_fourth_move(t_list **a, t_list **b, int cost_a, int cost_b)
{
	int	i;

	i = 0;
	while (i++ < cost_a)
		rra(a);
	i = 0;
	while (i++ < cost_b)
		rb(b);
}
