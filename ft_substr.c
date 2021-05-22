/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:17:27 by bbrassar          #+#    #+#             */
/*   Updated: 2021/05/22 18:27:02 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	s += start;
	n = ft_strlen(s);
	if (n > len)
		n = len;
	str = ft_calloc(n + 1, sizeof (char));
	if (str)
		ft_strlcpy(str, s, n + 1);
	return (str);
}
