# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2021/05/22 09:36:49 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

NAME_SO				= libft.so

CC					= gcc

CFLAGS				= -Wall -Wextra -Werror

SRCS				= $(addprefix ft_, $(addsuffix .c, \
						atoi \
						bzero \
						isalnum \
						isalpha \
						isascii \
						isdigit \
						isprint \
						isspace \
						memcmp \
						memcpy \
						memset \
						strlen \
						tolower \
						toupper \
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
