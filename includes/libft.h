/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:09:53 by bbrassar          #+#    #+#             */
/*   Updated: 2021/05/20 15:33:35 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_atoi(char const *s);

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

int		ft_isspace(int c);

void	*ft_memcpy(void *dst, void const *src, size_t n);

void	*ft_memset(void *b, int c, size_t len);

size_t	ft_strlen(char const *s);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif
