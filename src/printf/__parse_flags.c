/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:17:31 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 10:20:04 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"

// TODO not implemented
void	__parse_flags(t_opt *opt, char const **fmt)
{
	char const *s = *fmt;

	while (1)
	{
		if (*s == '#')
			opt->bits |= OPT_HASHTAG;
		else if (*s == '')
	}
	*fmt = s;
}
