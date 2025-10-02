/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:34:41 by sdadak            #+#    #+#             */
/*   Updated: 2025/09/06 17:24:09 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>


typedef struct s_list
{
	int	value;
	struct s_list	*next;
	int	index;
}	t_list;

int     ft_atoi(const char *nptr);
t_list  *ft_lstnew(int value, int index);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int     ft_lstsize(t_list *lst);
char	**ft_split(char const *s, char c);

#endif
