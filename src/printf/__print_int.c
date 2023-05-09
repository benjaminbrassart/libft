/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:08:58 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 23:19:56 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/cast.h"
#include "private/conversions.h"
#include "private/ft_printf.h"
#include <unistd.h>

static int	__zero(t_printerface *pi, t_opt *opt,
				char const *buf, size_t len);

static int	__min_width(t_printerface *pi, t_opt *opt,
				char const *buf, size_t len);

int	__print_int(t_printerface *pi, t_opt *opt, va_list ap)
{
	char			buffer[20];
	size_t			len;
	long long const	n = __cast_signed(opt->length, va_arg(ap, long long));

	len = __itoa_base_s(n, buffer, sizeof (buffer), g_base_dec);
	if (opt->bits & OPT_HAS_PRECISION)
	{
		if (opt->precision == 0 && n == 0)
			len = 0;
		opt->bits &= ~OPT_ZERO;
	}
	return (__zero(pi, opt, buffer, len));
}

static int	__zero(t_printerface *pi, t_opt *opt,
	char const *buf, size_t len)
{
	int	r;

	r = 0;
	if (opt->bits & OPT_ZERO)
	{
		while (len < opt->min_width && r >= 0)
			if (__checked_add(&r, __printerface_write(pi, "0", 1)) >= 0)
				++len;
	}
	return (__checked_add(&r, __min_width(pi, opt, buf, len)));
}

// TODO implement me!
static int	__min_width(t_printerface *pi, t_opt *opt,
				char const *buf, size_t len)
{
	(void)pi;
	(void)opt;
	(void)buf;
	(void)len;
	return (0);
}
