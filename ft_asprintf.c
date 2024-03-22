/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:01:55 by bbrassar          #+#    #+#             */
/*   Updated: 2024/03/22 22:08:55 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft.h"

#include <stdlib.h>

int	ft_asprintf(char **strp, char const *fmt, ...)
{
	va_list	ap;
	int		result;

	va_start(ap, fmt);
	result = ft_vasprintf(strp, fmt, ap);
	va_end(ap);
	return (result);
}

int	ft_vasprintf(char **strp, char const *fmt, va_list ap)
{
	va_list	ap_copy;
	int		len;

	va_copy(ap_copy, ap);
	len = ft_vsnprintf(NULL, 0, fmt, ap_copy);
	va_end(ap_copy);
	if (len < 0)
		return (len);
	*strp = malloc(len);
	if (*strp == NULL)
		return (-1);
	return (ft_vsnprintf(*strp, len, fmt, ap));
}
