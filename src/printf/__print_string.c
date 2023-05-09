/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:06:38 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 19:45:12 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/ft_printf.h"
#include <unistd.h>

int	__print_string(t_printerface *pi, t_opt *opt, va_list ap)
{
	char const	*s = va_arg(ap, char const *);
	size_t		len;

	if (s == NULL)
		s = "(null)";
	if (opt->bits & OPT_HAS_PRECISION)
		len = ft_strnlen(s, opt->precision);
	else
		len = ft_strlen(s);
	return (__printerface_write(pi, s, len));
}
