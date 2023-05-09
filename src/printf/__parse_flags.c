/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:17:31 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 19:03:40 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"

static int const	g_flags_table[1 << (sizeof (char) * 8)] = {
	OPT_NONE,
['-'] = OPT_DASH,
['0'] = OPT_ZERO,
['+'] = OPT_PLUS,
[' '] = OPT_SPACE,
['#'] = OPT_HASHTAG,
};

void	__parse_flags(t_opt *opt, char const **fmt)
{
	char const	*s = *fmt;
	int			flag;

	while (1)
	{
		if (*s <= 0)
			break ;
		flag = g_flags_table[(int)*s];
		if (flag == OPT_NONE)
			break ;
		opt->bits |= flag;
		++s;
	}
	*fmt = s;
}
