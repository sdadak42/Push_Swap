/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:38:42 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 19:33:31 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	trgt_a(int number, t_list **a)
{
	t_list	*temp;
	int		result;
	int		foundbigger;

	foundbigger = 0;
	temp = *a;
	result = 2147483647;
	while (temp)
	{
		if (temp -> number > number)
		{
			if (temp -> number <= result)
			{
				foundbigger = 1;
				result = temp -> number;
			}
		}
		temp = temp -> next;
	}
	if (!foundbigger)
		return (ft_list_max_min(a, 'n'));
	return (result);
}

int	trgt_b(int number, t_list **b)
{
	t_list	*temp;
	int		result;
	int		foundsmaller;

	foundsmaller = 0;
	temp = *b;
	result = -2147483648;
	while (temp)
	{
		if (temp -> number < number)
		{
			if (temp -> number >= result)
			{
				foundsmaller = 1;
				result = temp -> number;
			}
		}
		temp = temp -> next;
	}
	if (!foundsmaller)
		return (ft_list_max_min(b, 'x'));
	return (result);
}

int	in_half(int number, t_list **list)
{
	int		count;
	int		size;
	t_list	*temp;

	count = 0;
	size = ft_lstsize(*list);
	temp = *list;
	while (number != temp -> number)
	{
		count++;
		temp = temp -> next;
	}
	if (size % 2 == 1)
		return (count <= (size + 1) / 2);
	else
		return (count < size / 2);
}

int	cost(int number, t_list **list)
{
	int		count;
	int		size;
	t_list	*temp;

	temp = *list;
	size = ft_lstsize(temp);
	count = 0;
	while (number != temp -> number)
	{
		count++;
		temp = temp -> next;
	}
	if (in_half(number, list))
		return (count);
	else
		return (size - count);
}
