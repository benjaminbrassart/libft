/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:54:33 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/09 14:53:54 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int i, int fd)
{
	char			buffer[INT_MAX_DIGITS];
	unsigned int	n;
	unsigned int	count;

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
	write(fd, buffer + INT_MAX_DIGITS - count, count);
}
