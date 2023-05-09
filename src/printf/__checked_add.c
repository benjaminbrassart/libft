/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __checked_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:40:49 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 20:44:06 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/ft_printf.h"

int	__checked_add(int *base, int add)
{
	if (*base < 0 || add < 0)
		return (*base = -1);
	return (*base += add);
}
