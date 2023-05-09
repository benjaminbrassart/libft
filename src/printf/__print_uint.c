/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 05:52:24 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 19:35:04 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/cast.h"
#include "private/conversions.h"
#include "private/ft_printf.h"
#include <unistd.h>
#include <stdint.h>

int	__print_uint(t_printerface *pi, t_opt *opt, va_list ap)
{
	char			buffer[19];
	size_t			len;
	unsigned int	n;

	n = __cast_unsigned(opt->length, va_arg(ap, unsigned long long));
	len = __uitoa_base_s(n, buffer, sizeof (buffer), g_base_dec);
	return (__printerface_write(pi, buffer, len));
}
