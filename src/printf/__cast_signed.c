/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __cast_signed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:05:37 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 19:26:19 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/cast.h"

long long	__cast_signed(enum e_lengthmod length,
		signed long long n)
{
	if (length == LEN_SHORT_SHORT)
		return ((signed char)n);
	if (length == LEN_SHORT)
		return ((signed short)n);
	if (length == LEN_NORMAL)
		return ((signed int)n);
	if (length == LEN_LONG)
		return ((signed long)n);
	return ((signed long long)n);
}
