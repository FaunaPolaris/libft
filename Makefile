# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 16:11:54 by fpolaris          #+#    #+#              #
#    Updated: 2023/06/28 17:13:19 by fpolaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

YELLOW		=	\033[0;93m
SET_0		=	\033[0m

SRC_CONVERT	=	fp_atoi.c fp_itoa.c fp_itoa_base.c
SRC_PRINT	=	fp_putchar_fd.c fp_putendl_fd.c fp_putnbr_fd.c fp_putstr_fd.c fp_putnbr_base.c
SRC_PRINT	+=	fp_putstr_and_len.c fp_putnbr_and_len.c fp_putpointer.c fp_putnbr_un.c
SRC_STRING	=	fp_striteri.c fp_strchr.c fp_strdup.c fp_substr.c fp_strjoin.c fp_split.c fp_strnstr.c
SRC_STRING	+=	fp_strrchr.c fp_strmapi.c fp_strtrim.c fp_strndup.c fp_strlen.c
SRC_STRING	+=	fp_strlcat.c fp_strlcpy.c fp_strncmp.c
SRC_MEMORY	=	fp_memmove.c fp_memcpy.c fp_memset.c fp_memchr.c fp_memcmp.c fp_bzero.c fp_calloc.c
SRC_ISTO	=	fp_tolower.c fp_toupper.c fp_isalnum.c fp_isalpha.c fp_isascii.c fp_isdigit.c fp_isprint.c
SRC_GRID	=	fp_alloc_grid.c fp_fill_grid.c fp_chrs_grid.c fp_chrd_grid.c

SRC_ALL		=	$(addprefix convert/,$(SRC_CONVERT))
SRC_ALL		+=	$(addprefix print/,$(SRC_PRINT))
SRC_ALL		+=	$(addprefix strings/,$(SRC_STRING))
SRC_ALL		+=	$(addprefix memory/,$(MEMORY))
SRC_ALL		+=	$(addprefix is_to/,$(SRC_ISTO))
SRC_ALL		+=	$(addprefix data/,$(SRC_GRID))

AR		=	ar rcs
RM		=	rm -rf

OBJS_DIR	=	objs
OBJS_ALL	=	$(addprefix $(OBJS_DIR)/,$(SRC_ALL:.c=.o))

all: $(NAME)

$(NAME): $(OBJS_ALL)
	@$(AR) $(NAME) $(OBJS_ALL)
	@echo "$(YELLOW)libft.a compiled$(SET_0)"

$(OBJS_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ -Iheader

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(YELLOW)libft.a cleared$(SET_0)"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re
