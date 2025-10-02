/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:21:31 by sdadak            #+#    #+#             */
/*   Updated: 2025/09/06 17:42:01 by sdadak           ###   ########.fr       */
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
void	sa(t_list **list)
{
	t_list	*temp;

	temp = (*list) -> next ;
	(*list) -> next = temp -> next;
	temp -> next = *list;
	*list = temp;
	printf("sa\n");
}
void	sb(t_list **list)
{
	t_list	*temp;

	temp = (*list) -> next ;
	(*list) -> next = temp -> next;
	temp -> next = *list;
	*list = temp;
	printf("sb\n");
}

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	temp = *list_b;
	*list_b = temp -> next;
	temp -> next = *list_a;
	*list_a = temp;
	printf("pa\n");
}
void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	temp = *list_a;
	*list_a = temp -> next;
	temp -> next = *list_b;
	*list_b = temp;
	printf("pb\n");
}
void	ra(t_list **list)
{
	t_list	*temp;

	temp = *list;
	ft_lstlast(*list) -> next = temp;
	*list = temp -> next;
	temp -> next = NULL;
	printf("ra\n");
}
void	rb(t_list **list)
{
	t_list	*temp;

	temp = *list;
	ft_lstlast(*list) -> next = temp;
	*list = temp -> next;
	temp -> next = NULL;
	printf("rb\n");
}

void	rra(t_list **list)
{
	t_list	*new_head;
	t_list	*temp;
	t_list	*second;

	temp = *list;
	while (temp -> next -> next)
		temp = temp -> next;
	new_head = temp -> next;
	second = *list;
	new_head -> next = second;
	temp -> next = NULL;
	*list = new_head;
	printf("rra\n");
}
void	rrb(t_list **list)
{
	t_list	*new_head;
	t_list	*temp;
	t_list	*second;

	temp = *list;
	while (temp -> next -> next)
		temp = temp -> next;
	new_head = temp -> next;
	second = *list;
	new_head -> next = second;
	temp -> next = NULL;
	*list = new_head;
	printf("rrb\n");
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
	
	ra(&list_a);
	ft_printlst(&list_a);
	rra(&list_a);
	ft_printlst(&list_a);
}
