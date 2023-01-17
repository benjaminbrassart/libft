/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __parse_options.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:15:16 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:22:42 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/options.h"

void	__parse_options(t_opt *opt, char const **fmt)
{
	opt->length = LEN_NORMAL;
	__parse_length(opt, fmt);
}
