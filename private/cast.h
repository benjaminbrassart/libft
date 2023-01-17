/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 07:59:50 by bbrassar          #+#    #+#             */
/*   Updated: 2023/01/17 08:01:05 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_H
# define CAST_H

# include "private/options.h"

unsigned long long
__cast_unsigned(enum e_lengthmod length, unsigned long long n);

long long
__cast_signed(enum e_lengthmod length, long long n);

#endif // CAST_H
