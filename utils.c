/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:09:35 by sdadak            #+#    #+#             */
/*   Updated: 2025/09/06 17:33:47 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	long	r;
	
	i = 0;
	if (nptr[i] == '\0')
		exit (1);
	sign = 1;
	r = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		r = (r * 10) + (nptr[i++] - '0');
	if (nptr[i] != '\0' || (r * sign) < -2147483648 || (r * sign) > 2147483647)
	{
		printf("error\n");
		exit (1);
	}
	return ((int)(r * sign));
}

t_list	*ft_lstnew(int value, int index)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> value = value;
	new -> next = NULL;
	new -> index = index;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
		ft_lstlast(*lst)->next = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;

	i = ft_lstsize(lst);
	while (i-- > 1)
		lst = lst -> next;
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
