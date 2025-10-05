/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:21:31 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/05 18:18:47 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

t_list	*ft_toint_and_fill(char **arr)
{
	t_list	*list = NULL;
	t_list	*new;
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (arr[j])
	{
		new = ft_lstnew(ft_atoi(arr[j]), i);
		ft_lstadd_back(&list, new);
		j++;
		i++;
	}
	return (list);
}

void	ft_printlst(t_list **list)
{
	t_list	*temp;

	temp = *list;
	while (temp)
	{
		printf("%d -> %d\n", temp -> value, temp -> index);
		temp = temp -> next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	
	(void)list_b;
	list_b = NULL;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	list_a = ft_toint_and_fill(argv);
	ft_printlst(&list_a);
	ft_printlst(&list_b);
	
	rra(&list_a);
	ft_printlst(&list_a);
}
