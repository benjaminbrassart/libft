/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:18:49 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 19:04:42 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"
#include "ft.h"

void	__parse_width(t_opt *opt, va_list ap, char const **fmt)
{
	char const	*s = *fmt;
	size_t		width;

	if (*s == '*')
	{
		*fmt = s + 1;
		opt->min_width = va_arg(ap, size_t);
		opt->bits |= OPT_HAS_WIDTH;
		return ;
	}
	width = 0;
	while (ft_isdigit(*s))
		width = width * 10 + *s++ - '0';
	if (s != *fmt)
	{
		opt->min_width = width;
		opt->bits |= OPT_HAS_WIDTH;
	}
	*fmt = s;
}
