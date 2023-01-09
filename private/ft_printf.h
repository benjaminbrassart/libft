/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:01:25 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/09 10:15:53 by bbrassar         ###   ########.fr       */
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
__print_hex(int fd, va_list ap);

#endif // FT_PRINTF_H
