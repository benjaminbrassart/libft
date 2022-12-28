/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:00:56 by bbrassar          #+#    #+#             */
/*   Updated: 2022/12/28 09:28:55 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_itoa(int i)
{
	char			buffer[11];
	unsigned int	n;
	unsigned int	count;

	if (i < 0)
		n = -i;
	else
		n = i;
	count = 0;
	while (n || count == 0)
	{
		buffer[sizeof (buffer) - ++count] = n % 10 + '0';
		n /= 10;
	}
	if (i < 0)
		buffer[sizeof (buffer) - ++count] = '-';
	return (ft_strndup(buffer + sizeof (buffer) - count, count));
}
