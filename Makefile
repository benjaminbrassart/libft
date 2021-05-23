# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2021/05/23 14:18:32 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

NAME_SO				= libft.so

CC					= gcc

CFLAGS				= -Wall -Wextra -Werror -g

SRCS				= $(addprefix ft_, $(addsuffix .c, \
						memset \
						bzero \
						memcpy \
						memccpy \
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
						strrchr \
						strncmp \
						strlcpy \
						atoi \
						calloc \
						strdup \
						substr \
						strjoin \
						strtrim \
						strmapi \
						$(addsuffix _fd, \
							putchar \
							putstr \
							putendl \
							putnbr \
						) \
					  ))

BONUS_SRCS			= $(addprefix ft_, $(addsuffix .c, \
						lstnew \
						lstadd_front \
						lstsize \
						lstlast \
						lstadd_back \
						lstiter \
					  ))

OBJS				= $(SRCS:.c=.o)

BONUS_OBJS			= $(BONUS_SRCS:.c=.o)

%.o:				%.c
					$(CC) $(CFLAGS) -I . -c $< -o $@

all:				$(NAME)

bonus:				$(NAME) $(OBJS) $(BONUS_OBJS)
					ar rc $^
					ranlib $<

$(NAME):			$(OBJS)
					ar rc $@ $^
					ranlib $@

$(NAME_SO):			$(OBJS) $(BONUS_OBJS)
					$(CC) $(CFLAGS) -fPIC -shared $^ -o $@

clean:
					rm -f $(OBJS) $(OBJS_BONUS)

fclean:				clean
					rm -f $(NAME) $(NAME_SO)

re:					fclean all

.PHONY:				all clean fclean re bonus
