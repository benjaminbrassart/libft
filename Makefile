# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:54:24 by bbrassar          #+#    #+#              #
#    Updated: 2023/01/17 07:27:22 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CC := cc
CFLAGS := -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -c
CFLAGS += -MMD -MP
CFLAGS += -I.
CFLAGS += -Iprivate

AR := ar
ARFLAGS := rs

RM := rm -vf
MKDIR := mkdir -vp

ifeq ($(DEBUG), true)
CFLAGS += -g3
endif

DIR_SRC := src
DIR_OBJ := obj

SRC := ft_memset.c
SRC += ft_memcpy.c
SRC += ft_memccpy.c
SRC += ft_memmove.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_strlen.c
SRC += ft_isalpha.c
SRC += ft_isdigit.c
SRC += ft_isalnum.c
SRC += ft_isascii.c
SRC += ft_isprint.c
SRC += ft_isspace.c
SRC += ft_toupper.c
SRC += ft_tolower.c
SRC += ft_strchr.c
SRC += ft_strrchr.c
SRC += ft_strncmp.c
SRC += ft_strlcpy.c
SRC += ft_strlcat.c
SRC += ft_strnstr.c
SRC += ft_atoi.c
SRC += ft_calloc.c
SRC += ft_strdup.c
SRC += ft_substr.c
SRC += ft_strjoin.c
SRC += ft_strtrim.c
SRC += ft_split.c
SRC += ft_itoa.c
SRC += ft_strnlen.c
SRC += ft_strndup.c
SRC += ft_strtoi.c
SRC += ft_strcmp.c
SRC += ft_strcspn.c
SRC += ft_strspn.c
SRC += ft_strstr.c
SRC += ft_strrstr.c
SRC += ft_strpbrk.c

# get_next_line
SRC += get_next_line.c

# ft_printf
SRC += ft_printf.c
SRC += ft_dprintf.c
SRC += ft_sprintf.c
SRC += ft_snprintf.c
SRC += printf/__print_char.c
SRC += printf/__print_int.c
SRC += printf/__print_uint.c
SRC += printf/__print_string.c
SRC += printf/__print_hex.c
SRC += printf/__uitoa_base_s.c
SRC += printf/__printerface_write.c
SRC += printf/ft_printf_core.c

OBJ := $(SRC:%.c=$(DIR_OBJ)/%.o)
DEP := $(OBJ:.o=.d)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $?

$(OBJ): $(DIR_OBJ)/%.o:	$(DIR_SRC)/%.c
	@$(MKDIR) $(@D)
	$(CC) $(CFLAGS) $< -o $@

-include $(DEP)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	@$(RM) -r $(DIR_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

test: test.c $(NAME)
	$(CC) -Wall -Werror -Wextra $< -o $@ -lft -L.
