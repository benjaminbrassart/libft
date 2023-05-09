/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:46:57 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 18:58:37 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcasecmp(char const *s1, char const *s2)
{
	unsigned char const	*b1 = (unsigned char const *)s1;
	unsigned char const	*b2 = (unsigned char const *)s2;

	while (*b1 != '\0' && ft_toupper(*b1) == ft_toupper(*b2))
	{
		++b1;
		++b2;
	}
	return (ft_toupper(*b1) - ft_toupper(*b2));
}
