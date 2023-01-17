/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:01:25 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 06:19:43 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>

typedef int	(*t_conversion)(int, va_list);

int
__print_string(int fd, va_list ap);

int
__print_int(int fd, va_list ap);

int
__print_char(int fd, va_list ap);

int
__print_uint(int fd, va_list ap);

int
__print_hex_low(int fd, va_list ap);

int
__print_hex_up(int fd, va_list ap);

size_t
__uitoa_base_s(
	unsigned long long n, char *buffer,
	size_t buffer_size, char const *base)
__attribute__((nonnull(2, 4)));

#endif // FT_PRINTF_H
