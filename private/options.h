/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 07:58:02 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 18:40:35 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONS_H
# define OPTIONS_H

# include <stdarg.h>
# include <stddef.h>

# define OPT_NONE 0x0
# define OPT_HAS_WIDTH 0x1
# define OPT_HAS_PRECISION 0x2
# define OPT_HASHTAG 0x4
# define OPT_ZERO 0x8
# define OPT_DASH 0x10
# define OPT_SPACE 0x20
# define OPT_PLUS 0x40
# define OPT_QUOTE 0x80

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
	size_t				min_width;
	size_t				precision;
	int					bits;
};

void
__parse_flags(t_opt *opt, char const **fmt);

void
__parse_width(t_opt *opt, va_list ap, char const **fmt);

void
__parse_precision(t_opt *opt, va_list ap, char const **fmt);

void
__parse_length(t_opt *opt, char const **fmt);

void
__parse_options(t_opt *opt, va_list ap, char const **fmt);

#endif // OPTIONS_H
