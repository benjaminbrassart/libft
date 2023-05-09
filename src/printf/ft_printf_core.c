/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_core.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 07:16:54 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 23:14:58 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/conversions.h"
#include "private/ft_printf.h"
#include "private/options.h"

static t_conversion const	g_conversions[256] = {
['s'] = __print_string,
['d'] = __print_int,
['i'] = __print_int,
['c'] = __print_char,
['u'] = __print_uint,
['x'] = __print_hex_low,
['X'] = __print_hex_up,
};

static int
__print_conversion(t_printerface *pi, char const **fmt, va_list ap);

int	ft_printf_core(t_printerface *pi, char const *fmt, va_list ap)
{
	int	res;

	res = 0;
	while (res >= 0 && *fmt != '\0')
	{
		if (*fmt == '%')
		{
			++fmt;
			__checked_add(&res, __print_conversion(pi, &fmt, ap));
		}
		else
			__checked_add(&res, __printerface_write(pi, fmt, 1));
		++fmt;
	}
	return (res);
}

static int	__print_conversion(t_printerface *pi, char const **fmt, va_list ap)
{
	t_conversion const	*conversion;
	t_opt				opt;

	__parse_options(&opt, ap, fmt);
	conversion = &g_conversions[(unsigned char)**fmt];
	if (*conversion == NULL)
		return (__printerface_write(pi, *fmt, 1));
	return ((*conversion)(pi, &opt, ap));
}
