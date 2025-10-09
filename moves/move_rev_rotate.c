/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:24 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/05 18:27:26 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **list)
{
	t_list	*new_head;
	t_list	*temp;

	temp = *list;
	while (temp -> next -> next)
		temp = temp -> next;
	new_head = temp -> next;
	new_head -> next = *list;
	temp -> next = NULL;
	*list = new_head;
	write(1, "rra\n", 4);
}

void	rrb(t_list **list)
{
	t_list	*new_head;
	t_list	*temp;

	temp = *list;
	while (temp -> next -> next)
		temp = temp -> next;
	new_head = temp -> next;
	new_head -> next = *list;
	temp -> next = NULL;
	*list = new_head;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra(list_a);
	rrb(list_b);
	write(1, "rrr\n", 4);
}
