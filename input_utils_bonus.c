/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:09:35 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/26 12:58:11 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_atoi(const char *nptr, t_list **list, char **temp)
{
	int		i;
	int		sign;
	long	r;

	i = 0;
	sign = 1;
	r = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
		if (nptr[i] == '\0')
			ft_free_and_exit(list, temp);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		r = (r * 10) + (nptr[i++] - '0');
	if (nptr[i] != '\0' || (r * sign) < -2147483648 || (r * sign) > 2147483647)
		ft_free_and_exit(list, temp);
	return ((int)(r * sign));
}

void	ft_toint_and_fill(char **argv, t_list **a)
{
	t_list	*new;
	char	**temp;
	int		i;
	int		j;

	j = 1;
	while (argv[j])
	{
		i = 0;
		temp = ft_split(argv[j++], ' ');
		if (temp[i] == NULL)
			ft_free_and_exit(a, temp);
		while (temp[i])
		{
			new = ft_lstnew(ft_atoi(temp[i++], a, temp));
			ft_lstadd_back(a, new);
		}
		i = 0;
		while (temp[i])
			free(temp[i++]);
		free(temp);
	}
}
