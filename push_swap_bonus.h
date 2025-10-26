/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:34:41 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/24 21:12:44 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	int				number;
	struct s_list	*next;
}	t_list;

char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(int number);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_list_free_exit(t_list **list);
void	ft_list_free(t_list **list);
void	ft_free_and_exit(t_list **list, char **arr);
void	ft_is_duplicates(t_list **list);
int		ft_is_sorted_bonus(t_list **list);
void	ft_toint_and_fill(char **argv, t_list **a);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
int		ft_strcmp(char *s1, char *s2);
int		moves_check(char *moves);
void	ft_get_move(t_list **a, t_list **b, char **moves);
void	sa_bonus(t_list **list);
void	sb_bonus(t_list **list);
void	ss_bonus(t_list **list_a, t_list **list_b);
void	pa_bonus(t_list **list_a, t_list **list_b);
void	pb_bonus(t_list **list_a, t_list **list_b);
void	ra_bonus(t_list **list);
void	rb_bonus(t_list **list);
void	rr_bonus(t_list **list_a, t_list **list_b);
void	rra_bonus(t_list **list);
void	rrb_bonus(t_list **list);
void	rrr_bonus(t_list **list_a, t_list **list_b);

#endif
