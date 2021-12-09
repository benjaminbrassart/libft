/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:45:49 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/09 14:43:08 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char const	*s;
	unsigned char const	ch = c;

	d = dst;
	s = src;
	while (n--)
	{
		*d++ = *s;
		if (*s++ == ch)
			return (d);
	}
	return (NULL);
}
