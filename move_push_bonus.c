/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_move_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:05:06 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/05 18:11:53 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa_bonus(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	if (*list_b)
	{
		temp = *list_b;
		*list_b = temp -> next;
		temp -> next = *list_a;
		*list_a = temp;
	}
}

void	pb_bonus(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	if (*list_a)
	{
		temp = *list_a;
		*list_a = temp -> next;
		temp -> next = *list_b;
		*list_b = temp;
	}
}
