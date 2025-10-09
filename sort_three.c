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

void    ft_sort_three(t_list **list)
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