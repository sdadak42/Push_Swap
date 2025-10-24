/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:34:49 by sdadak            #+#    #+#             */
/*   Updated: 2025/10/22 19:31:10 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*ptr;

	if (!s)
		return (NULL);
	slen = 0;
	while (s[slen])
		slen++;
	if (start > slen)
		len = 0;
	if (len > slen - start)
		len = slen - start;
	i = 0;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static size_t	ft_wcount(const char *p, char a)
{
	size_t	i;
	size_t	wcount;

	i = 0;
	wcount = 0;
	while (p[i])
	{
		if (p[i] != a)
		{
			wcount++;
			while (p[i] != a && p[i])
			{
				i++;
			}
		}
		if (p[i] != '\0')
			i++;
	}
	return (wcount);
}

static void	ft_free(char **ptr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free(ptr[i++]);
	free(ptr);
}

static char	**ft_fill(char **ptr, const char *p, char a)
{
	size_t	i;
	size_t	j;
	size_t	ccount;

	j = 0;
	i = 0;
	while (p[i])
	{
		if (p[i] != a)
		{
			ccount = 0;
			while (p[i] != a && p[i])
			{
				ccount++;
				i++;
			}
			ptr[j++] = ft_substr(p, i - ccount, ccount);
			if (!ptr[j - 1])
				return (ft_free(ptr, j - 1), NULL);
		}
		if (p[i] != '\0')
			i++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	wcount;

	wcount = ft_wcount(s, c);
	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[wcount] = NULL;
	ptr = ft_fill(ptr, s, c);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
