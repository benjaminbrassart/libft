# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 22:40:36 by bbrassar          #+#    #+#              #
#    Updated: 2021/07/10 20:09:09 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef BASE_DIR_LIBFT
STANDALONE					:= 1
endif

CFLAGS_LIBFT				= -Wall -Werror -Wextra -c -MMD -I$(DIR_INCLUDE_LIBFT)

LDFLAGS_LIBFT				= -fPIC -shared

BASENAME_LIBFT				:= libft.a

BASENAME_SO_LIBFT			:= libft.so

BASEDIR_SRC_LIBFT			:= src

BASEDIR_OBJ_LIBFT			:= obj

BASEDIR_INCLUDE_LIBFT		:= include

ifdef STANDALONE
NAME_LIBFT					:= $(BASENAME_LIBFT)

NAME_SO_LIBFT				:= $(BASENAME_SO_LIBFT)

DIR_SRC_LIBFT				:= $(BASEDIR_SRC_LIBFT)

DIR_OBJ_LIBFT				:= $(BASEDIR_OBJ_LIBFT)

DIR_INCLUDE_LIBFT			:= $(BASEDIR_INCLUDE_LIBFT)
else
RULE_PREFIX					:= libft-

NAME_LIBFT					:= $(BASE_DIR_LIBFT)/$(BASENAME_LIBFT)

NAME_SO_LIBFT				:= $(BASE_DIR_LIBFT)/$(BASENAME_SO_LIBFT)

DIR_SRC_LIBFT				:= $(BASE_DIR_LIBFT)/$(BASEDIR_SRC_LIBFT)

DIR_OBJ_LIBFT				:= $(BASE_DIR_LIBFT)/$(BASEDIR_OBJ_LIBFT)

DIR_INCLUDE_LIBFT			:= $(BASE_DIR_LIBFT)/$(BASEDIR_INCLUDE_LIBFT)
endif

SRC_LIBFT					= $(addprefix ft_, $(addsuffix .c,	\
								memset							\
								bzero							\
								memcpy							\
								memccpy							\
								memmove							\
								memchr							\
								memrchr							\
								rawmemchr						\
								memcmp							\
								strlen							\
								isalnum							\
								isalpha							\
								isascii							\
								iscntrl							\
								isdigit							\
								isgraph							\
								islower							\
								isprint							\
								ispunct							\
								isspace							\
								isupper							\
								isxdigit						\
								toupper							\
								tolower							\
								strchr							\
								strcmp							\
								strcpy							\
								strcat							\
								strstr							\
								strrchr							\
								strcspn							\
								strnlen							\
								strncmp							\
								strncpy							\
								strncat							\
								strndup							\
								strlcpy							\
								strlcat							\
								strnstr							\
								atoi							\
								atoll							\
								patoi							\
								calloc							\
								strdup							\
								substr							\
								strjoin							\
								strtrim							\
								split							\
								itoa							\
								lltoa							\
								strmapi							\
								putchar							\
								putchar_fd						\
								putstr							\
								putstr_fd						\
								putendl							\
								putendl_fd						\
								putnbr							\
								putnbr_fd						\
								lstnew							\
								lstadd_front					\
								lstsize							\
								lstlast							\
								lstadd_back						\
								lstdelone						\
								lstclear						\
								lstiter							\
								lstmap							\
								strrepeat						\
							)) get_next_line.c

OBJ_LIBFT					= $(addprefix $(DIR_OBJ_LIBFT)/, $(SRC_LIBFT:.c=.o))

DEP_LIBFT					= $(OBJ_LIBFT:.o=.d)

$(NAME_LIBFT):				$(OBJ_LIBFT)
							ar rcs $@ $^

-include $(DEP_LIBFT)

$(RULE_PREFIX)all:			$(NAME_LIBFT) $(NAME_SO_LIBFT)

$(DIR_OBJ_LIBFT):
							mkdir -p $@

$(DIR_OBJ_LIBFT)/%.o:		$(DIR_SRC_LIBFT)/%.c |$(DIR_OBJ_LIBFT)
							$(CC) $(CFLAGS_LIBFT) $< -o $@

$(NAME_SO_LIBFT):			$(OBJ_LIBFT)
							$(CC) $(LDFLAGS_LIBFT) $^ -o $@

$(RULE_PREFIX)clean:
							rm -rf $(DIR_OBJ_LIBFT)

$(RULE_PREFIX)fclean:		$(RULE_PREFIX)clean
							rm -f $(NAME_LIBFT) $(NAME_SO_LIBFT)

$(RULE_PREFIX)re:			$(addprefix $(RULE_PREFIX), fclean all)

.PHONY:						$(addprefix $(RULE_PREFIX), all clean fclean re)
