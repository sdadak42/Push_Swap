/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 02:28:49 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/23 02:28:49 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
