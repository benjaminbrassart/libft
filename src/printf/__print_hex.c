/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:18:09 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 06:24:15 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/ft_printf.h"
#include <unistd.h>

static char const	g_base_low[] = "0123456789abcdef";
static char const	g_base_up[] = "0123456789ABCDEF";

static int
__print_hex(int fd, unsigned int n, char const *base);

int	__print_hex_low(int fd, va_list ap)
{
	unsigned int const	n = va_arg(ap, unsigned int);

	return __print_hex(fd, n, g_base_low);
}

int	__print_hex_up(int fd, va_list ap)
{
	unsigned int const	n = va_arg(ap, unsigned int);

	return __print_hex(fd, n, g_base_up);
}

static int	__print_hex(int fd, unsigned int n, char const *base)
{
	char	buffer[8];
	size_t	len;

	len = __uitoa_base_s(n, buffer, sizeof (buffer), base);
	return (write(fd, buffer, len));
}