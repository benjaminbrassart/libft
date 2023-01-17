/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 07:52:44 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 07:55:09 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/ft_printf.h"

int	__print_pointer(t_printerface *pi, va_list ap)
{
	int	res[2];

	res[0] = __printerface_write(pi, "0x", 2);
	if (res[0] == -1)
		return (-1);
	res[1] = __print_hex_low(pi, ap);
	if (res[1] == -1)
		return (-1);
	return (res[0] + res[1]);
}
