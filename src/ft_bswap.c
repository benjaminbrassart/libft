/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:01:28 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/25 08:12:38 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_byteswap.h"
#include <stdint.h>

inline uint16_t	ft_bswap_16(uint16_t bytes)
{
	return ((bytes >> 8) | (bytes << 8));
}

inline uint32_t	ft_bswap_32(uint32_t bytes)
{
	return (
		(bytes >> 24)
		| (bytes >> 8 & 0xff00)
		| (bytes << 8 & 0xff0000)
		| (bytes << 24)
	);
}

inline uint64_t	ft_bswap_64(uint64_t bytes)
{
	return ((ft_bswap_32(bytes) + 0ULL) << 32 | ft_bswap_32(bytes >> 32));
}
