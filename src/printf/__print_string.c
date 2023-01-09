/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:06:38 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/09 10:08:07 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "private/ft_printf.h"
#include <unistd.h>

int	__print_string(int fd, va_list ap)
{
	char const	*s = va_arg(ap, char const *);

	if (s == NULL)
		s = "(null)";
	return (write(fd, s, ft_strlen(s)));
}
