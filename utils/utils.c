/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:09:35 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/05 18:31:38 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
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
