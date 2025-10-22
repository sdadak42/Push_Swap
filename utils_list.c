/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:32:17 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 19:22:44 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int number)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> number = number;
	new -> next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
	}
	else
		ft_lstlast(*lst)->next = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

int	ft_list_max_min(t_list **list, char maxmin)
{
	int		value;
	t_list	*temp;

	temp = *list;
	if (maxmin == 'x')
	{
		value = -2147483648;
		while (temp)
		{
			if (temp -> number > value)
				value = temp -> number;
			temp = temp -> next;
		}
	}
	else
	{
		value = 2147483647;
		while (temp)
		{
			if (temp -> number < value)
				value = temp -> number;
			temp = temp -> next;
		}
	}
	return (value);
}
