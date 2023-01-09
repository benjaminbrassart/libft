/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:08:58 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/09 10:10:39 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/ft_printf.h"
#include <unistd.h>

int	__print_int(int fd, va_list ap)
{
	char	buffer[11];
	size_t	len;

	len = ft_itoa_s(va_arg(ap, int), buffer);
	return (write(fd, buffer, len));
}
