/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:19:42 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/25 07:57:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft.h"
#include <stdlib.h>

static size_t	ft_split_size(char const *s, char const *set)
{
	size_t		size;
	char const	*p;

	size = 0;
	while (*s)
	{
		while (ft_strchr(set, *s) != NULL)
			++s;
		p = s;
		while (*p && ft_strchr(set, *p) == NULL)
			++p;
		if (p > s)
			++size;
		s = p;
	}
	return (size);
}

void	*ft_split_destroy(char **array)
{
	int	n;

	n = 0;
	if (array)
	{
		while (array[n])
			free(array[n++]);
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char const *set)
{
	size_t const	size = ft_split_size(s, set);
	char			**array;
	char const		*p;
	size_t			n;

	array = ft_calloc(size + 1, sizeof (*array));
	if (array == NULL)
		return (NULL);
	array[size] = NULL;
	n = 0;
	while (n < size)
	{
		while (ft_strchr(set, *s))
			++s;
		p = s;
		while (*p != '\0' && ft_strchr(set, *p) == NULL)
			++p;
		array[n] = ft_strndup(s, p - s);
		if (array[n] == NULL)
			return (ft_split_destroy(array));
		s = p;
		++n;
	}
	return (array);
}
