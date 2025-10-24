/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rev_rotate_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:24 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/24 20:49:17 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_bonus(t_list **list)
{
	t_list	*new_head;
	t_list	*temp;

	if (*list && (*list)-> next)
	{
		temp = *list;
		while (temp -> next -> next)
			temp = temp -> next;
		new_head = temp -> next;
		new_head -> next = *list;
		temp -> next = NULL;
		*list = new_head;
	}
}

void	rrb_bonus(t_list **list)
{
	t_list	*new_head;
	t_list	*temp;

	if (*list && (*list)-> next)
	{
		temp = *list;
		while (temp -> next -> next)
			temp = temp -> next;
		new_head = temp -> next;
		new_head -> next = *list;
		temp -> next = NULL;
		*list = new_head;
	}
}

void	rrr_bonus(t_list **list_a, t_list **list_b)
{
	t_list	*new_head;
	t_list	*temp;

	if (*list_a && *list_b && (*list_a)-> next && (*list_b)-> next)
	{
		temp = *list_a;
		while (temp -> next -> next)
			temp = temp -> next;
		new_head = temp -> next;
		new_head -> next = *list_a;
		temp -> next = NULL;
		*list_a = new_head;
		temp = *list_b;
		while (temp -> next -> next)
			temp = temp -> next;
		new_head = temp -> next;
		new_head -> next = *list_b;
		temp -> next = NULL;
		*list_b = new_head;
	}
}
