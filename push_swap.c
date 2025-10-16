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

static void	ft_toint_and_fill(char **argv, t_list **a)
{
	t_list	*new;
	char	**temp;
	int	index;
	int	i;
	int	j;

	j = 1;
	index = 0;
	while (argv[j])
	{
		i = 0;
		temp = ft_split(argv[j++], ' ');
		if (temp[i] == NULL)
			ft_free_and_exit(a, temp);
		while (temp[i])
		{
			new = ft_lstnew(ft_atoi(temp[i++], a, temp), index++);
			ft_lstadd_back(a, new);
		}
		i = 0;
		while (temp[i])
			free(temp[i++]);
		free(temp);
	}
}

void	ft_printlst(t_list **list)
{
	t_list	*temp;

	temp = *list;
	while (temp)
	{
		printf("%d -> %d\n", temp -> number, temp -> index);
		temp = temp -> next;
	}
}

static void	push_swap(char **argv)
{
	t_list	*a;

	a = NULL;
	ft_toint_and_fill(argv, &a);
	ft_is_duplicates(&a);
	ft_is_sorted(&a);
	ft_is_short_sort(&a);

	ft_list_free(&a);
}
int	main(int argc, char **argv)
{
	if (argc > 1)
		push_swap(argv);
	else
		return (0);
}
