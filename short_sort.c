/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:21:46 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/09 18:13:46 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_sort_three(t_list **list)
{
    int x;
    int y;
    int z;

    x = (*list)-> number;
    y = (*list)-> next -> number;
    z = (*list)-> next -> next -> number;
    if (x < y && y < x)
        return ;
    else if (x < y && y > z && x < z)
    {
        rra(list);
        sa(list);
    }
    else if (x > y && y < z && x < z)
        sa(list);
    else if (x < y && y > z && x > z)
        rra(list);
    else if (x > y && y < z && x > z)
        ra(list);
    else if (x > y && y > z)
    {
        sa(list);
        rra(list);
    }
}
void    ft_sort_two(t_list **list, int k)
{
    int x;
    int y;

    x = (*list)-> number;
    y = (*list)-> next -> number;
    if (x > y)
    {
        if (k == 'a')
            sa(list);
        else if (k == 'b')
            sb(list);
    }
}
void    ft_is_short_sort(t_list **list)
{
    int len;

    len = ft_lstsize(*list);
    if (len == 2)
    {
        ft_sort_two(list, 'a');
        ft_list_free(list);
        exit(1);
    }
    else if (len == 3)
    {
        ft_sort_three(list);
        ft_list_free(list);
        exit(1);
    }
}