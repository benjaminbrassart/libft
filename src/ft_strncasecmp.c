/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:50:15 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 18:53:36 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strncasecmp(char const *s1, char const *s2, size_t n)
{
	unsigned char const	*b1 = (unsigned char const *)s1;
	unsigned char const	*b2 = (unsigned char const *)s2;

	if (n == 0)
		return (0);
	while (--n > 0 && *s1 != '\0' && ft_toupper(*s1) == ft_toupper(*s2))
	{
		++b1;
		++b2;
	}
	return (ft_toupper(*b1) - ft_toupper(*b2));
}
