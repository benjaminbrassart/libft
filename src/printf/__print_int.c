/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:08:58 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 19:48:13 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/cast.h"
#include "private/conversions.h"
#include "private/ft_printf.h"
#include <unistd.h>

int	__print_int(t_printerface *pi, t_opt *opt, va_list ap)
{
	char			buffer[20];
	size_t			len;
	long long const	n = __cast_signed(opt->length, va_arg(ap, long long));

	len = __itoa_base_s(n, buffer, sizeof (buffer), g_base_dec);
	return (__printerface_write(pi, buffer, len));
}
