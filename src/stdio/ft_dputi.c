/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:17:00 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/26 00:22:27 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

int	ft_dputi(int fd, int n)
{
	char			buff[11];
	int				i;
	unsigned int	num;

	if (n == 0)
		return (write(fd, "0", 1));
	if (n < 0)
		num = -n;
	else
		num = n;
	i = 11;
	while (num)
	{
		buff[--i] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		buff[--i] = '-';
	return (write(fd, buff + i, 11 - i));
}
