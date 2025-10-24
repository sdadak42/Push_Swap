/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:21:31 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 19:30:39 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort(t_list **a, t_list **b)
{
	int	min_a;
	int	cost_a;
	int	i;

	i = 0;
	pb(a, b);
	pb(a, b);
	ft_push_b(a, b);
	ft_is_short_sort(a);
	ft_push_a(a, b);
	min_a = ft_list_max_min(a, 'n');
	cost_a = cost(min_a, a);
	if (in_half(min_a, a))
	{
		while (i++ < cost_a)
			ra(a);
	}
	else
		while (i++ < cost_a)
			rra(a);
}

static void	push_swap(char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	ft_toint_and_fill(argv, &a);
	ft_is_duplicates(&a);
	ft_is_sorted(&a);
	ft_is_short_sort(&a);
	ft_is_sorted(&a);
	ft_sort(&a, &b);
	ft_is_sorted(&a);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		push_swap(argv);
	else
		return (0);
}
