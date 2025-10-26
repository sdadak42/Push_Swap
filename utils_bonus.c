/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:37:45 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/24 21:12:10 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	moves_check(char *moves)
{
	if (ft_strcmp(moves, "sa\n") != 0 && ft_strcmp(moves, "sb\n") != 0
		&& ft_strcmp(moves, "ss\n") != 0 && ft_strcmp(moves, "pa\n") != 0
		&& ft_strcmp(moves, "pb\n") != 0 && ft_strcmp(moves, "ra\n") != 0
		&& ft_strcmp(moves, "rb\n") != 0 && ft_strcmp(moves, "rr\n") != 0
		&& ft_strcmp(moves, "rra\n") != 0 && ft_strcmp(moves, "rrb\n") != 0
		&& ft_strcmp(moves, "rrr\n") != 0)
		return (1);
	return (0);
}

static void	get_move_part_two(t_list **a, t_list **b, char *moves)
{
	if (ft_strcmp(moves, "ra") == 0)
		ra_bonus(a);
	else if (ft_strcmp(moves, "rb") == 0)
		rb_bonus(b);
	else if (ft_strcmp(moves, "rr") == 0)
		rr_bonus(a, b);
	else if (ft_strcmp(moves, "rra") == 0)
		rra_bonus(a);
	else if (ft_strcmp(moves, "rrb") == 0)
		rrb_bonus(b);
	else if (ft_strcmp(moves, "rrr") == 0)
		rrr_bonus(a, b);
}

void	ft_get_move(t_list **a, t_list **b, char **moves)
{
	int	i;

	i = 0;
	while (moves[i])
	{
		if (ft_strcmp(moves[i], "sa") == 0)
			sa_bonus(a);
		else if (ft_strcmp(moves[i], "sb") == 0)
			sb_bonus(b);
		else if (ft_strcmp(moves[i], "ss") == 0)
			ss_bonus(a, b);
		else if (ft_strcmp(moves[i], "pa") == 0)
			pa_bonus(a, b);
		else if (ft_strcmp(moves[i], "pb") == 0)
			pb_bonus(a, b);
		else
			get_move_part_two(a, b, moves[i]);
		i++;
	}
	i = 0;
	while (moves[i])
		free(moves[i++]);
	free(moves);
}

int	ft_is_sorted_bonus(t_list **list)
{
	t_list	*temp;

	temp = *list;
	while (temp -> next)
	{
		if (temp -> number > temp -> next -> number)
			return (0);
		temp = temp -> next;
	}
	return (1);
}

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
