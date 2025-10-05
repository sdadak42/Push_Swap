/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:12:16 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/05 18:29:35 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **list)
{
	t_list	*temp;

	temp = *list;
	ft_lstlast(*list)-> next = temp;
	*list = temp -> next;
	temp -> next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **list)
{
	t_list	*temp;

	temp = *list;
	ft_lstlast(*list)-> next = temp;
	*list = temp -> next;
	temp -> next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(*list_a);
	rb(*list_b);
	write(1, "rr\n", 3);
}
