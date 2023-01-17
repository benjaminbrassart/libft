/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:53:29 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 07:04:39 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/ft_printf.h"
#include "private/conversions.h"
#include <unistd.h>

static int
__print_conversion(t_printerface *pi, char const *fmt, va_list ap);

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
	struct s_printerface	printerface;
	int						res;
	int						tmp;

	printerface.iface.fd = fd;
	printerface.type = PF_FILE_DESCRIPTOR;
	res = 0;
	while (res >= 0 && *fmt != '\0')
	{
		if (*fmt == '%')
			tmp = __print_conversion(&printerface, ++fmt, ap);
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

static int	__print_conversion(t_printerface *pi, char const *fmt, va_list ap)
{
	t_conversion const	*conversion = &g_conversions[(unsigned char)*fmt];

	if (*conversion == NULL)
		return (__printerface_write(pi, fmt, 1));
	return ((*conversion)(pi, ap));
}
