# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2021/05/20 14:17:36 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

NAME_SO				= libft.so

CC					= clang

CFLAGS				= -Wall -Wextra -Werror

DIR_OBJS			= obj

DIR_SRCS			= src

DIR_INCLUDES		= includes

SRCS				= $(addprefix ft_, $(addsuffix .c, \
						isdigit \
						isspace \
						strlen \
					  ))

OBJS				= $(addprefix $(DIR_OBJS)/, $(SRCS:.c=.o))

$(DIR_OBJS):
					mkdir -p $(DIR_OBJS)

$(DIR_OBJS)/%.o:	$(DIR_SRCS)/%.c $(DIR_OBJS)
					$(CC) $(CFLAGS) -I includes -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rc $@ $^
					ranlib $@

$(NAME_SO):			$(OBJS)
					$(CC) $(CFLAGS) -fPIC -shared $^ -o $@

clean:
					rm -rf $(DIR_OBJS)

fclean:				clean
					rm -f $(NAME) $(NAME_SO)

re:					fclean all

.PHONY:				all clean fclean re
