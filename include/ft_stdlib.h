/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:11:44 by bbrassar          #+#    #+#             */
/*   Updated: 2021/07/22 14:12:23 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include "ft_def.h"

int			ft_atoi(char const *s);

long long	ft_atoll(char const *s);

void		*ft_calloc(t_size count, t_size size);

char		*ft_itoa(int n);

char		*ft_lltoa(long long n);

#endif /* FT_STDLIB_H */