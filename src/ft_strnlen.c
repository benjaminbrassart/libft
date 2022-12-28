/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:48:25 by bbrassar          #+#    #+#             */
/*   Updated: 2022/12/28 09:48:07 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t	ft_strnlen(char const *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen && s[len] != '\0')
		++len;
	return (len);
}
