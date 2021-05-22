# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2021/05/22 10:54:25 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

NAME_SO				= libft.so

CC					= gcc

CFLAGS				= -Wall -Wextra -Werror

SRCS				= $(addprefix ft_, $(addsuffix .c, \
						memset \
						bzero \
						memcpy \
						memmove \
						memchr \
						memcmp \
						strlen \
						isalpha \
						isdigit \
						isalnum \
						isascii \
						isprint \
						toupper \
						tolower \
						strchr \
						atoi \
						calloc \
						strdup \
						$(addsuffix _fd, \
							putchar \
							putstr \
							putendl \
							putnbr \
						) \
					  ))

OBJS				= $(SRCS:.c=.o)

%.o:				%.c
					$(CC) $(CFLAGS) -I . -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rc $@ $^
					ranlib $@

$(NAME_SO):			$(OBJS)
					$(CC) $(CFLAGS) -fPIC -shared $^ -o $@

clean:
					rm -f $(OBJS)

fclean:				clean
					rm -f $(NAME) $(NAME_SO)

re:					fclean all

.PHONY:				all clean fclean re
