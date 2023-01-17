/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __cast_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:01:24 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:05:23 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/cast.h"

unsigned long long	__cast_unsigned(enum e_lengthmod length,
		unsigned long long n)
{
	if (length == LEN_SHORT_SHORT)
		return ((unsigned char)n);
	if (length == LEN_SHORT)
		return ((unsigned short)n);
	if (length == LEN_NORMAL)
		return ((unsigned int)n);
	if (length == LEN_LONG)
		return ((unsigned long)n);
	return ((unsigned long long)n);
}
