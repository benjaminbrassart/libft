/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:57:36 by bbrassar          #+#    #+#             */
/*   Updated: 2023/05/09 18:52:26 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char const *s1, char const *s2)
{
	unsigned char const	*b1 = (unsigned char const *)s1;
	unsigned char const	*b2 = (unsigned char const *)s2;

	while (*b1 != '\0' && *b1 == *b2)
	{
		++b1;
		++b2;
	}
	return (*b1 - *b2);
}
