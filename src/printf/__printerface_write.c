/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __printerface_write.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:28:20 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 07:02:46 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/ft_printf.h"
#include <unistd.h>

int
__print_buffer(struct s_printf_buffer *buffer, char const *data, size_t len);

int	__printerface_write(t_printerface *interface, char const *data, size_t len)
{
	if (interface->type == PF_FILE_DESCRIPTOR)
		return (write(interface->iface.fd, data, len));
	if (interface->type == PF_STACK_BUFFER)
		return (__print_buffer(&interface->iface.buffer, data, len));
	return (-1);
}

// TODO implement for s*printf
int	__print_buffer(struct s_printf_buffer *buffer, char const *data, size_t len)
{
	(void)buffer;
	(void)data;
	(void)len;
	return (0);
}
