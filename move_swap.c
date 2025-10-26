/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:00:52 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/26 12:57:07 by sdadak           ###   ########.fr       */
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
