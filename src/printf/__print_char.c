/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:14:20 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:33:35 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/ft_printf.h"
#include <unistd.h>

int	__print_char(t_printerface *pi, t_opt *opt, va_list ap)
{
	char const	c = va_arg(ap, int);

	(void)opt;
	return (__printerface_write(pi, &c, 1));
}
