/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:28:35 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 19:19:36 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_duplicates(t_list **list)
{
	t_list	*temp;
	t_list	*temp2;

	temp = (*list);
	while (temp)
	{
		temp2 = temp -> next;
		while (temp2)
		{
			if (temp -> number == temp2-> number)
				ft_list_free_exit(list);
			temp2 = temp2 -> next;
		}
		temp = temp -> next;
	}
}

void	ft_is_sorted(t_list **list)
{
	t_list	*temp;

	temp = *list;
	while (temp -> next)
	{
		if (temp -> number > temp -> next -> number)
			return ;
		temp = temp -> next;
	}
	ft_list_free(list);
	exit(1);
}
