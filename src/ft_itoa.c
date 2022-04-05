/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:00:56 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/05 22:43:16 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "intlen.h"

char	*ft_itoa(int i)
{
	char			buffer[MAX_INT_LEN];
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
		buffer[MAX_INT_LEN - ++count] = n % 10 + '0';
		n /= 10;
	}
	if (i < 0)
		buffer[MAX_INT_LEN - ++count] = '-';
	s = ft_calloc(count, sizeof (*s) + 1);
	if (s)
		ft_memmove(s, buffer + MAX_INT_LEN - count, count);
	return (s);
}
