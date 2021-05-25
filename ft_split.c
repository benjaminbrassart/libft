/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:19:42 by bbrassar          #+#    #+#             */
/*   Updated: 2021/05/25 13:58:32 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
static void	*ft_split_clear(char **split)
{
	while (*split)
		free((*split)++);
	free(split);
	return (NULL);
}
*/

static size_t	ft_split_size(char const *s, char c)
{
	size_t	sz;

	while (*s == c)
		++s;
	sz = 0;
	while (*s)
	{
		if (sz == 0)
			++sz;
		if (*(s + 1) && *s == c && *(s + 1) != c)
			++sz;
		++s;
	}
	return (sz);
}

char	**ft_split(char const *s, char c)
{
	size_t	sz;
	size_t	i;
	size_t	j;
	char	**split;

	sz = ft_split_size(s, c);
	split = ft_calloc(sz + 1, sizeof (char *));
	if (split)
	{
		i = 0;
		while (i < sz)
		{
			j = 0;
			while (*s == c)
				++s;
			while (s[j] && s[j] != c)
				++j;
			split[i] = ft_substr(s, 0, j);
			s += j;
			++i;
		}
		split[sz] = NULL;
	}
	return (split);
}
