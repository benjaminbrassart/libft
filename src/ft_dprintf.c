/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:53:29 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/09 10:30:01 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/ft_printf.h"
#include <unistd.h>

static int
__print_conversion(int fd, char const *fmt, va_list ap);

int	ft_dprintf(int fd, char const *fmt, ...)
{
	int		res;
	va_list	ap;

	va_start(ap, fmt);
	res = ft_vdprintf(fd, fmt, ap);
	va_end(ap);
	return (res);
}

int	ft_vdprintf(int fd, char const *fmt, va_list ap)
{
	int	res;
	int	tmp;

	res = 0;
	while (res >= 0 && *fmt != '\0')
	{
		if (*fmt == '%')
			tmp = __print_conversion(fd, ++fmt, ap);
		else
			tmp = write(fd, fmt, 1);
		++fmt;
		if (tmp < 0)
			res = -1;
		else
			res += tmp;
	}
	return (res);
}

static t_conversion const	g_conversions[256] = {
	['s'] = __print_string,
	['d'] = __print_int,
	['i'] = __print_int,
	['c'] = __print_char,
};

static int	__print_conversion(int fd, char const *fmt, va_list ap)
{
	t_conversion const	*conversion = &g_conversions[(unsigned char)*fmt];

	if (*conversion == NULL)
		return (write(fd, fmt, 1));
	return ((*conversion)(fd, ap));
}
