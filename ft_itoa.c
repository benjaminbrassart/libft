/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:00:56 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/09 14:51:52 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int i)
{
	char			buffer[INT_MAX_DIGITS];
	unsigned int	n;
	unsigned int	count;
	char			*s;

	if (i < 0)
		n = -i;
	else
		n = i;
	count = 0;
	while (n || count == 0)
	{
		buffer[INT_MAX_DIGITS - ++count] = n % 10 + '0';
		n /= 10;
	}
	if (i < 0)
		buffer[INT_MAX_DIGITS - ++count] = '-';
	s = ft_calloc(count, sizeof (*s) + 1);
	if (s)
		ft_memmove(s, buffer + INT_MAX_DIGITS - count, count);
	return (s);
}
