/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:12:16 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/24 20:51:19 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_bonus(t_list **list)
{
	t_list	*temp;

	if (*list && (*list)-> next)
	{
		temp = *list;
		ft_lstlast(*list)-> next = temp;
		*list = temp -> next;
		temp -> next = NULL;
	}
}

void	rb_bonus(t_list **list)
{
	t_list	*temp;

	if (*list && (*list)-> next)
	{
		temp = *list;
		ft_lstlast(*list)-> next = temp;
		*list = temp -> next;
		temp -> next = NULL;
	}
}

void	rr_bonus(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	if (*list_a && *list_b && (*list_a)-> next && (*list_b)-> next)
	{
		temp = *list_a;
		ft_lstlast(*list_a)-> next = temp;
		*list_a = temp -> next;
		temp -> next = NULL;
		temp = *list_b;
		ft_lstlast(*list_b)-> next = temp;
		*list_b = temp -> next;
		temp -> next = NULL;
	}
}
