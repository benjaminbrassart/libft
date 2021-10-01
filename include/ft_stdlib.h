/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:11:44 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/01 12:11:05 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include "ft_def.h"

int			ft_atoi(char const *s)
			__attribute__((nonnull(1)));

long long	ft_atoll(char const *s)
			__attribute__((nonnull(1)));

void		*ft_calloc(t_size count, t_size size);

char		*ft_itoa(int n);

char		*ft_ltoa(long n);

char		*ft_lltoa(long long n);

int			ft_strtoi(char const *s, char const **endptr)
			__attribute__((nonnull(1)));

long		ft_strtol(char const *s, char const **endptr)
			__attribute__((nonnull(1)));

long long	ft_strtoll(char const *s, char const **endptr)
			__attribute__((nonnull(1)));

#endif