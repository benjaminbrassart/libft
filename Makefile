# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2021/06/03 18:42:20 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

NAME_SO				= libft.so

CC					= gcc

CFLAGS				= -Wall -Wextra -Werror

DIR_SRC				= src

SRC					= $(addprefix ft_, $(addsuffix .c, \
						memset \
						bzero \
						memcpy \
						memccpy \
						memmove \
						memchr \
						memrchr \
						rawmemchr \
						memcmp \
						strlen \
						isalnum \
						isalpha \
						isascii \
						iscntrl \
						isdigit \
						isgraph \
						islower \
						isprint \
						ispunct \
						isspace \
						isupper \
						isxdigit \
						toupper \
						tolower \
						strchr \
						strcmp \
						strcpy \
						strcat \
						strstr \
						strrchr \
						strnlen \
						strncmp \
						strncpy \
						strncat \
						strndup \
						strlcpy \
						strlcat \
						strnstr \
						atoi \
						atoll \
						calloc \
						strdup \
						substr \
						strjoin \
						strtrim \
						split \
						itoa \
						strmap \
						strmapi \
						putchar \
						putchar_fd \
						putstr \
						putstr_fd \
						putendl \
						putendl_fd \
						putnbr \
						putnbr_fd \
						lstnew \
						lstadd_front \
						lstsize \
						lstlast \
						lstadd_back \
						lstdelone \
						lstclear \
						lstiter \
						lstmap \
						strrepeat \
					  ))

DIR_OBJ				= obj

OBJ					= $(addprefix $(DIR_OBJ)/, $(SRC:.c=.o))

DIR_INCLUDE			= include

all:				$(NAME) $(NAME_SO)

$(DIR_OBJ)/%.o:		$(DIR_SRC)/%.c
					@mkdir -p $(DIR_OBJ)
					$(CC) $(CFLAGS) -I $(DIR_INCLUDE) -c $< -o $@

$(NAME):			$(OBJ)
					ar rcs $@ $^

$(NAME_SO):			$(OBJ)
					$(CC) $(CFLAGS) -fPIC -shared $^ -o $@

clean:
					rm -f $(OBJ)

fclean:				clean
					rm -f $(NAME) $(NAME_SO)

re:					fclean all

.PHONY:				all clean fclean re
