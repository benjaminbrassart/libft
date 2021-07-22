/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:12:35 by bbrassar          #+#    #+#             */
/*   Updated: 2021/07/22 14:14:05 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

/*
 TODO: Reverse every ft_put*_fd prototypes (fd, *)
 */

void	ft_putchar(char c);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr(char const *s);

void	ft_putstr_fd(char const *s, int fd);

void	ft_putendl(char const *s);

void	ft_putendl_fd(char const *s, int fd);

void	ft_putnbr(int n);

void	ft_putnbr_fd(int n, int fd);

#endif /* FT_STDIO_H */