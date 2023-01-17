/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __cast_signed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:05:37 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:06:35 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/cast.h"

long long	__cast_signed(enum e_lengthmod length,
		long long n)
{
	if (length == LEN_SHORT_SHORT)
		return ((signed char)n);
	if (length == LEN_SHORT)
		return ((short)n);
	if (length == LEN_NORMAL)
		return ((int)n);
	if (length == LEN_LONG)
		return ((long)n);
	return ((long long)n);
}
