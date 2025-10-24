/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:40:32 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/24 20:57:21 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_read_moves(t_list **a)
{
	char	*input;
	char	*temp;
	char	*arr;

	arr = ft_strdup("");
	while (1)
	{
		input = get_next_line(0);
		if (!input)
			break ;
		if (input[0] == '\n' || moves_check(input))
		{
			write(2, "Error\n", 6);
			ft_list_free(a);
			free(arr);
			free(input);
			exit(1);
		}
		temp = arr;
		arr = ft_strjoin(temp, input);
		free(temp);
		free(input);
	}
	return (arr);
}

static void	ft_checker(char **moves)
{
	t_list	*a;
	t_list	*b;
	char	*arr;

	a = NULL;
	b = NULL;
	ft_toint_and_fill(moves, &a);
	ft_is_duplicates(&a);
	arr = ft_read_moves(&a);
	moves = ft_split(arr, '\n');
	free(arr);
	ft_get_move(&a, &b, moves);
	if (b != NULL || ft_is_sorted_bonus(&a) == 0)
	{
		ft_list_free(&a);
		ft_list_free(&b);
		write(1, "KO\n", 3);
		exit(1);
	}
	else if (ft_is_sorted_bonus(&a) == 1)
	{
		ft_list_free(&a);
		write(1, "OK\n", 3);
		exit(1);
	}
}

int	main(int argc, char **moves)
{
	if (argc > 1)
		ft_checker(moves);
	else
		return (0);
}
