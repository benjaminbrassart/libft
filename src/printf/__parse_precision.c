/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:19:02 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 18:46:42 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"
#include "ft.h"

void	__parse_precision(t_opt *opt, va_list ap, char const **fmt)
{
	char const	*s = *fmt;
	size_t		precision;

	if (*s != '.')
		return ;
	if (*++s == '*')
	{
		*fmt = s + 1;
		opt->precision = va_arg(ap, size_t);
		opt->bits |= OPT_HAS_PRECISION;
		return ;
	}
	precision = 0;
	while (ft_isdigit(*s))
		precision = precision * 10 + *s++ - '0';
	if (s != *fmt)
	{
		opt->precision = precision;
		opt->bits |= OPT_HAS_PRECISION;
	}
	*fmt = s;
}
