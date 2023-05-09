/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_options.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:15:16 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 18:42:57 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"

void	__parse_options(t_opt *opt, va_list ap, char const **fmt)
{
	opt->length = LEN_NORMAL;
	opt->bits = OPT_NONE;
	__parse_flags(opt, fmt);
	__parse_width(opt, ap, fmt);
	__parse_precision(opt, ap, fmt);
	__parse_length(opt, fmt);
}
