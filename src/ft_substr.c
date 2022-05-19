/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:17:27 by bbrassar          #+#    #+#             */
/*   Updated: 2022/05/19 13:14:53 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (s == NULL)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	s += start;
	return (ft_strndup(s, ft_strnlen(s, len)));
}
