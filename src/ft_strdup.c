/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 09:52:27 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 18:55:53 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	*ft_strdup(char const *s)
{
	size_t const	n = ft_strlen(s);
	char			*str;

	str = malloc((n + 1) * (sizeof (*str)));
	if (str != NULL)
		ft_memcpy(str, s, n + 1);
	return (str);
}
