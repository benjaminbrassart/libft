/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:12:42 by bbrassar          #+#    #+#             */
/*   Updated: 2021/05/25 17:18:30 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_concat(char *dst, char const *src)
{
	while (*dst)
		dst++;
	while (*src)
		*dst++ = *src++;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	len = 0;
	if (s1)
		len += ft_strlen(s1);
	if (s2)
		len += ft_strlen(s2);
	str = ft_calloc(len + 1, sizeof (char));
	if (str)
	{
		if (s1)
			ft_concat(str, s1);
		if (s2)
			ft_concat(str, s2);
	}
	return (str);
}
