/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:14:20 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/09 10:15:04 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/ft_printf.h"
#include <unistd.h>

int	__print_char(int fd, va_list ap)
{
	char const	c = va_arg(ap, int);

	return (write(fd, &c, 1));
}
