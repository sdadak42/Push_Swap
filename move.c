/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:47:59 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 19:59:27 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_first_move(t_list **a, t_list **b, int cost_a, int cost_b)
{
	int	i;

	i = 0;
	if (cost_a > cost_b)
	{
		while (i++ < cost_b)
			rr(a, b);
		i = 0;
		while (i++ < cost_a - cost_b)
			ra(a);
	}
	else if (cost_a < cost_b)
	{
		while (i++ < cost_a)
			rr(a, b);
		i = 0;
		while (i++ < cost_b - cost_a)
			rb(b);
	}
	else
		while (i++ < cost_a)
			rr(a, b);
}

static void	ft_second_move(t_list **a, t_list **b, int cost_a, int cost_b)
{
	int	i;

	i = 0;
	if (cost_a > cost_b)
	{
		while (i++ < cost_b)
			rrr(a, b);
		i = 0;
		while (i++ < cost_a - cost_b)
			rra(a);
	}
	else if (cost_a < cost_b)
	{
		while (i++ < cost_a)
			rrr(a, b);
		i = 0;
		while (i++ < cost_b - cost_a)
			rrb(b);
	}
	else
		while (i++ < cost_a)
			rrr(a, b);
}

static void	ft_third_move(t_list **a, t_list **b, int cost_a, int cost_b)
{
	int	i;

	i = 0;
	while (i++ < cost_a)
		ra(a);
	i = 0;
	while (i++ < cost_b)
		rrb(b);
}

void	ft_push_b(t_list **a, t_list **b)
{
	int	number;
	int	cost_b;
	int	cost_a;

	while (ft_lstsize(*a) > 3)
	{
		number = ft_min_cost_a(a, b, 2147483647);
		cost_b = cost(trgt_b(number, b), b);
		cost_a = cost(number, a);
		if (in_half(number, a) == 1 && in_half(trgt_b(number, b), b) == 1)
			ft_first_move(a, b, cost_a, cost_b);
		else if (in_half(number, a) == 0 && in_half(trgt_b(number, b), b) == 0)
			ft_second_move(a, b, cost_a, cost_b);
		else if (in_half(number, a) == 1 && in_half(trgt_b(number, b), b) == 0)
			ft_third_move(a, b, cost_a, cost_b);
		else if (in_half(number, a) == 0 && in_half(trgt_b(number, b), b) == 1)
			ft_fourth_move(a, b, cost_a, cost_b);
		pb(a, b);
	}
}

void	ft_push_a(t_list **a, t_list **b)
{
	int	number;
	int	cost_b;
	int	cost_a;

	while ((*b))
	{
		number = ft_min_cost_b(a, b, 2147483647);
		cost_b = cost(number, b);
		cost_a = cost(trgt_a(number, a), a);
		if (in_half(number, b) == 1 && in_half(trgt_a(number, a), a) == 1)
			ft_first_move(a, b, cost_a, cost_b);
		else if (in_half(number, b) == 0 && in_half(trgt_a(number, a), a) == 0)
			ft_second_move(a, b, cost_a, cost_b);
		else if (in_half(number, b) == 0 && in_half(trgt_a(number, a), a) == 1)
			ft_third_move(a, b, cost_a, cost_b);
		else if (in_half(number, b) == 1 && in_half(trgt_a(number, a), a) == 0)
			ft_fourth_move(a, b, cost_a, cost_b);
		pa(a, b);
	}
}
