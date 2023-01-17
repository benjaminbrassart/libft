/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 07:58:02 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:17:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONS_H
# define OPTIONS_H

enum e_lengthmod
{
	LEN_NORMAL,
	LEN_SHORT_SHORT,
	LEN_SHORT,
	LEN_LONG,
	LEN_LONG_LONG,
};

typedef struct s_opt	t_opt;

struct s_opt
{
	enum e_lengthmod	length;
};

void
__parse_flags(t_opt *opt, char const **fmt);

void
__parse_width(t_opt *opt, char const **fmt);

void
__parse_precision(t_opt *opt, char const **fmt);

void
__parse_length(t_opt *opt, char const **fmt);

void
__parse_options(t_opt *opt, char const **fmt);

#endif // OPTIONS_H
