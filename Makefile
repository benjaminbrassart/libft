# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2021/12/09 15:12:49 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a
NAME_BONUS			= libft_bonus.a

CC					= clang
CFLAGS				= -Wall -Wextra -Werror -c -MMD -MP -I.

ifeq ($(DEBUG), true)
CFLAGS				+= -g
endif

SRC					= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
						ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
						ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
						ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
						ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
						ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
						ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_BONUS			= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
						ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ					= $(SRC:.c=.o)
OBJ_BONUS			= $(SRC_BONUS:.c=.o)
DEP					= $(OBJ:.o=.d)
DEP_BONUS			= $(OBJ_BONUS:.o=.d)

$(NAME):			$(OBJ)
					ar rcs $@ $^

$(NAME_BONUS):		$(OBJ) $(OBJ_BONUS)

%.o:				%.c
					$(CC) $(CFLAGS) $< -o $@

all:				$(NAME)

clean:
					rm -f $(OBJ) $(BONUS_OBJ)

fclean:				clean
					rm -f $(NAME) $(NAME_BONUS)

re:					fclean all

bonus:				$(NAME_BONUS)

.PHONY:				all clean fclean re bonus
