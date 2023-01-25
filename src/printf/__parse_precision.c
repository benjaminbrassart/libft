/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:19:02 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 10:15:04 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"
#include "ft.h"

void	__parse_precision(t_opt *opt, char const **fmt)
{
	char const	*s = *fmt;
	size_t		precision;

	if (*s != '.')
		return;
	++s;
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
