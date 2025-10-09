/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:00:52 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/05 18:30:11 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **list)
{
	t_list	*temp;

	temp = (*list)-> next ;
	(*list)-> next = temp -> next;
	temp -> next = *list;
	*list = temp;
	write(1, "sa\n", 3);
}

void	sb(t_list **list)
{
	t_list	*temp;

	temp = (*list)-> next ;
	(*list)-> next = temp -> next;
	temp -> next = *list;
	*list = temp;
	write(1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a);
	sb(list_b);
	write(1, "ss\n", 3);
}
