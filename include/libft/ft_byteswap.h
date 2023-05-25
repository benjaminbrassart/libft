/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_byteswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:02:02 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/25 08:06:30 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BYTESWAP_H
# define FT_BYTESWAP_H

# include <stdint.h>

inline uint16_t
ft_bswap_16(uint16_t bytes);

inline uint32_t
ft_bswap_32(uint32_t bytes);

inline uint64_t
ft_bswap_64(uint64_t bytes);

#endif // FT_BYTESWAP_H
