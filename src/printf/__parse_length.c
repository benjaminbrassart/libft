/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:07:42 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:15:25 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"

void	__parse_length(t_opt *opt, char const **fmt)
{
	char	c;

	c = **fmt;
	if (c == 'l')
	{
		opt->length = LEN_LONG;
		if (*++(*fmt) == c)
		{
			opt->length = LEN_LONG_LONG;
			++(*fmt);
		}
	}
	else if (c == 'h')
	{
		opt->length = LEN_SHORT;
		if (*++(*fmt) == c)
		{
			opt->length = LEN_SHORT_SHORT;
			++(*fmt);
		}
	}
}
