/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:34:41 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 20:07:25 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				number;
	struct s_list	*next;
}	t_list;

void	sa(t_list **list);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra(t_list **list);
void	rb(t_list **list);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list);
void	rrb(t_list **list);
void	rrr(t_list **list_a, t_list **list_b);
int		ft_atoi(const char *nptr, t_list **list, char **temp);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(int number);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
int		ft_list_max_min(t_list **list, char maxmin);
void	ft_free_and_exit(t_list **list, char **arr);
void	ft_list_free_exit(t_list **list);
void	ft_list_free(t_list **list);
void	ft_is_duplicates(t_list **list);
void	ft_is_sorted(t_list **list);
void	ft_is_short_sort(t_list **list);
int		trgt_a(int number, t_list **a);
int		trgt_b(int number, t_list **b);
int		in_half(int number, t_list **list);
int		cost(int number, t_list **list);
int		ft_min_cost_a(t_list **a, t_list **b, int min_cost);
int		ft_min_cost_b(t_list **a, t_list **b, int min_cost);
void	ft_push_b(t_list **a, t_list **b);
void	ft_push_a(t_list **a, t_list **b);
void	ft_fourth_move(t_list **a, t_list **b, int cost_a, int cost_b);

#endif
