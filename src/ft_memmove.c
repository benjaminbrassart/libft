/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:04:05 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/25 07:57:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char		*d;
	unsigned char const	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = dst;
	s = src;
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	while (len-- > 0)
		d[len] = s[len];
	return (dst);
}
