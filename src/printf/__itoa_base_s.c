/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __itoa_base_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:29:44 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:39:37 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/ft_printf.h"

size_t	__itoa_base_s(
	long long i,
	char *buffer,
	size_t buffer_size,
	char const *base
)
{
	size_t const		base_len = ft_strlen(base);
	size_t				len;
	unsigned long long	n;

	if (i < 0)
		n = -i;
	else
		n = i;
	len = 0;
	while (buffer_size >= len && (len == 0 || n > 0))
	{
		buffer[buffer_size - (++len)] = base[n % base_len];
		n /= base_len;
	}
	if (i < 0 && buffer_size >= len)
		buffer[buffer_size - (++len)] = '-';
	if (n > 0 || len > buffer_size)
		len = 0;
	else
		ft_memmove(buffer, buffer + (buffer_size - len), len);
	return (len);
}
