/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:18:09 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 19:34:31 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/cast.h"
#include "private/conversions.h"
#include "private/ft_printf.h"
#include <unistd.h>

static int
__print_hex(t_printerface *pi, t_opt *opt,
	unsigned long long n, char const *base);

int	__print_hex_low(t_printerface *pi, t_opt *opt, va_list ap)
{
	unsigned long long const	n = va_arg(ap, unsigned long long);

	return (__print_hex(pi, opt, __cast_unsigned(opt->length, n),
			g_base_hex_low));
}

int	__print_hex_up(t_printerface *pi, t_opt *opt, va_list ap)
{
	unsigned long long const	n = va_arg(ap, unsigned long long);

	return (__print_hex(pi, opt, __cast_unsigned(opt->length, n),
			g_base_hex_up));
}

static int	__print_hex(t_printerface *pi, t_opt *opt,
		unsigned long long n, char const *base)
{
	char	buffer[8];
	size_t	len;

	(void)opt;
	len = __uitoa_base_s(n, buffer, sizeof (buffer), base);
	return (__printerface_write(pi, buffer, len));
}
