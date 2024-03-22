# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    GNUmakefile                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2024/03/22 23:40:11 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFILE := $(lastword $(MAKEFILE_LIST))
NAME := libft.a
NAME_DYN := libft.so

SRC := libft/ft_memset.c
SRC += libft/ft_memcpy.c
SRC += libft/ft_memccpy.c
SRC += libft/ft_memmove.c
SRC += libft/ft_memchr.c
SRC += libft/ft_memcmp.c
SRC += libft/ft_strlen.c
SRC += libft/ft_isalpha.c
SRC += libft/ft_isdigit.c
SRC += libft/ft_isalnum.c
SRC += libft/ft_isascii.c
SRC += libft/ft_isprint.c
SRC += libft/ft_isspace.c
SRC += libft/ft_toupper.c
SRC += libft/ft_tolower.c
SRC += libft/ft_strchr.c
SRC += libft/ft_strrchr.c
SRC += libft/ft_strncmp.c
SRC += libft/ft_strlcpy.c
SRC += libft/ft_strlcat.c
SRC += libft/ft_strnstr.c
SRC += libft/ft_atoi.c
SRC += libft/ft_calloc.c
SRC += libft/ft_strdup.c
SRC += libft/ft_substr.c
SRC += libft/ft_strjoin.c
SRC += libft/ft_strtrim.c
SRC += libft/ft_split.c
SRC += libft/ft_itoa.c
SRC += libft/ft_strnlen.c
SRC += libft/ft_strndup.c
SRC += libft/ft_strtoi.c
SRC += libft/ft_strcmp.c
SRC += libft/ft_strcspn.c
SRC += libft/ft_strspn.c
SRC += libft/ft_strstr.c
SRC += libft/ft_strrstr.c
SRC += libft/ft_strpbrk.c
SRC += libft/ft_bswap.c

# get_next_line
SRC += get_next_line/get_next_line.c

# ft_printf
SRC += printf/ft_printf.c
SRC += printf/ft_dprintf.c
SRC += printf/ft_sprintf.c
SRC += printf/ft_snprintf.c
SRC += printf/ft_asprintf.c
SRC += printf/ft_printf_core.c

OBJ := $(SRC:.c=.o)
DEP := $(OBJ:.o=.d)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $?
	ranlib $@

$(NAME_DYN): $(OBJ)
	$(CC) -shared $^ -o $@

$(OBJ): .EXTRA_PREREQS = $(MAKEFILE)
$(OBJ): %.o: %.c
	$(CC) -Wall -Wextra -Werror -c -fPIC -MMD -MP -Iinclude -Iprivate $(CFLAGS) $< -o $@

-include $(DEP)

.PHONY: all clean fclean re

all: $(NAME) $(NAME_DYN)

clean:
	@$(RM) $(OBJ) $(DEP)

fclean: clean
	@$(RM) $(NAME) $(NAME_DYN)

re: fclean
	@$(MAKE) -f $(MAKEFILE) all

.PHONY: so

so: $(NAME_DYN)
