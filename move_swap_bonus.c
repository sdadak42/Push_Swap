/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:00:52 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/24 20:50:05 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_bonus(t_list **list)
{
	t_list	*temp;

	if (*list && (*list)-> next)
	{
		temp = (*list)-> next ;
		(*list)-> next = temp -> next;
		temp -> next = *list;
		*list = temp;
	}
}

void	sb_bonus(t_list **list)
{
	t_list	*temp;

	if (*list && (*list)-> next)
	{
		temp = (*list)-> next ;
		(*list)-> next = temp -> next;
		temp -> next = *list;
		*list = temp;
	}
}

void	ss_bonus(t_list **list_a, t_list **list_b)
{
	t_list	*temp;
	t_list	*temp_b;

	if ((*list_a) && (*list_b) && (*list_a)-> next && (*list_b)-> next)
	{
		temp = (*list_a)-> next ;
		(*list_a)-> next = temp -> next;
		temp -> next = *list_a;
		*list_a = temp;
		temp_b = (*list_b)-> next ;
		(*list_b)-> next = temp_b -> next;
		temp_b -> next = *list_b;
		*list_b = temp_b;
	}
}
