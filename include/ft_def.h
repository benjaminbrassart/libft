/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_def.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:04:45 by bbrassar          #+#    #+#             */
/*   Updated: 2021/07/29 10:52:15 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEF_H
# define FT_DEF_H

# ifndef FT_NULL
#  define FT_NULL ((void *)0)
# endif /* FT_NULL */

typedef unsigned long	t_size;

typedef long			t_ssize;

typedef enum e_bool
{
	false = 0,
	true = 1
}	t_bool;

#endif /* FT_DEF_H */
