/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:05:06 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/05 18:11:53 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	temp = *list_b;
	*list_b = temp -> next;
	temp -> next = *list_a;
	*list_a = temp;
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	temp = *list_a;
	*list_a = temp -> next;
	temp -> next = *list_b;
	*list_b = temp;
	write(1, "pb\n", 3);
}
