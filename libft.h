/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 09:37:02 by bbrassar          #+#    #+#             */
/*   Updated: 2021/05/22 18:22:16 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, void const *src, size_t len);

void	*ft_memccpy(void *dst, void const *src, int c, size_t n);

void	*ft_memmove(void *dst, void const *src, size_t len);

void	*ft_memchr(void const *s, int c, size_t n);

int		ft_memcmp(void const *s1, void const *s2, size_t n);

size_t	ft_strlen(char const *s);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(char const *s, int c);

char	*ft_strrchr(char const *s, int c);

int		ft_strncmp(char const *s1, char const *s2, size_t n);

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);

char	*ft_strnstr(char const *haystack, char const *needle, size_t len);

int		ft_atoi(char const *s);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(char const *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_itoa(int nb);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

#endif
