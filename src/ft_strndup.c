/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:48:11 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/25 07:57:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft.h"
#include <stdlib.h>

char	*ft_strndup(char const *s, size_t maxlen)
{
	size_t const	len = ft_strnlen(s, maxlen);
	char			*buf;

	buf = malloc((len + 1) * sizeof (*s));
	if (buf != NULL)
	{
		ft_memmove(buf, s, len * sizeof (*s));
		buf[len * sizeof (*s)] = 0;
	}
	return (buf);
}
