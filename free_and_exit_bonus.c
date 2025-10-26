/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_exit_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:34:57 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 19:28:30 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_free_and_exit(t_list **list, char **arr)
{
	t_list	*temp;
	int		i;

	i = 0;
	if (list != NULL)
	{
		while (*list)
		{
			temp = *list;
			*list = (*list)-> next;
			free(temp);
		}
	}
	while (arr[i])
		free(arr[i++]);
	free(arr);
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_list_free_exit(t_list **list)
{
	t_list	*temp;

	if (list != NULL)
	{
		while (*list)
		{
			temp = *list;
			*list = (*list)-> next;
			free(temp);
		}
	}
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_list_free(t_list **list)
{
	t_list	*temp;

	if (list != NULL)
	{
		while (*list)
		{
			temp = *list;
			*list = (*list)->next;
			free(temp);
		}
	}
}
