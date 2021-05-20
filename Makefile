# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 11:38:19 by bbrassar          #+#    #+#              #
#    Updated: 2021/05/20 12:45:45 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

SRCS				= $(addprefix ft_, $(addsuffix .c, \
					  	isspace \
					  	strlen \
					  ))

OBJS				= $(SRCS:.c=.o)

DIR_SRCS			= src

DIR_OBJS			= obj

CC					= gcc

CFLAGS				= -Wall -Wextra -Werror

all:				$(NAME)

$(DIR_OBJS):
					mkdir -p $@

$(DIR_OBJS)/%.o:	$(DIR_SRCS)/%.c $(DIR_OBJS)
					$(CC) $(CFLAGS) -I . -c $< -o $@

$(NAME):			$(DIR_OBJS)/$(OBJS)
					ar rc $@ $^
					ranlib $@

clean:
					rm -rf $(DIR_OBJS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

so:					$(DIR_OBJS)/$(OBJS)
					$(CC) -shared -o libft.so $^

.PHONY:				all clean fclean re
