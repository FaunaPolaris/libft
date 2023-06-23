# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 09:43:44 by fpolaris          #+#    #+#              #
#    Updated: 2023/06/23 20:31:31 by fpolaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

YELLOW		=	\033[0;93m
SET_0		=	\033[0m

SRCS_MANDATORY	=	mandatory/ft_atoi.c mandatory/ft_bzero.c mandatory/ft_calloc.c 
SRCS_MANDATORY	+=	mandatory/ft_memchr.c mandatory/ft_memcmp.c mandatory/ft_memcpy.c 
SRCS_MANDATORY	+=	mandatory/ft_memmove.c mandatory/ft_memset.c mandatory/ft_strchr.c 
SRCS_MANDATORY	+=	mandatory/ft_strdup.c mandatory/ft_strlen.c mandatory/ft_strncmp.c 
SRCS_MANDATORY	+=	mandatory/ft_tolower.c mandatory/ft_toupper.c mandatory/ft_isalnum.c 
SRCS_MANDATORY	+=	mandatory/ft_isalpha.c mandatory/ft_isascii.c mandatory/ft_isdigit.c 
SRCS_MANDATORY	+=	mandatory/ft_isprint.c mandatory/ft_itoa.c mandatory/ft_putchar_fd.c 
SRCS_MANDATORY	+=	mandatory/ft_putendl_fd.c mandatory/ft_putnbr_fd.c mandatory/ft_putstr_fd.c 
SRCS_MANDATORY	+=	mandatory/ft_strjoin.c mandatory/ft_split.c mandatory/ft_strlcat.c 
SRCS_MANDATORY	+=	mandatory/ft_strlcpy.c mandatory/ft_strnstr.c mandatory/ft_strrchr.c 
SRCS_MANDATORY	+=	mandatory/ft_striteri.c mandatory/ft_strmapi.c mandatory/ft_strtrim.c mandatory/ft_substr.c

SRCS_BONUS	=	bonus/ft_lstadd_back_bonus.c bonus/ft_lstlast_bonus.c bonus/ft_lstadd_front_bonus.c 
SRCS_BONUS	+=	bonus/ft_lstmap_bonus.c bonus/ft_lstclear_bonus.c bonus/ft_lstnew_bonus.c bonus/ft_lstdelone_bonus.c bonus/ft_lstsize_bonus.c bonus/ft_lstiter_bonus.c

SRCS_DATA	=	data/grid/fp_alloc_grid.c data/grid/fp_fill_grid.c

SRCS_PRINT	=	print/fp_putstr_and_len.c print/fp_putnbr_base.c print/fp_putnbr_and_len.c

AR		=	ar rcs
RM		=	rm -rf

OBJS_DIR	=	objs
OBJS_MANDATORY	=	$(addprefix $(OBJS_DIR)/,$(SRCS_MANDATORY:.c=.o))
OBJS_BONUS	=	$(addprefix $(OBJS_DIR)/,$(SRCS_BONUS:.c=.o))
OBJS_DATA	=	$(addprefix $(OBJS_DIR)/,$(SRCS_DATA:.c=.o))
OBJS_PRINT	=	$(addprefix $(OBJS_DIR)/,$(SRCS_PRINT:.c=.o))

all: $(NAME)

$(NAME):$(OBJS_MANDATORY) $(OBJS_PRINT)
	@$(AR) $(NAME) $(OBJS_MANDATORY) $(OBJS_PRINT)
	@echo "$(YELLOW)libft.a compiled$(SET_0)"

$(OBJS_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ -Iheader

bonus: $(OBJS_BONUS)
	@$(AR) $(NAME) $(OBJS_BONUS)

data: $(OBJS_DATA)
	@$(AR) $(NAME) $(OBJS_DATA)

full: all bonus data

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(YELLOW)libft cleared$(SET_0)"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re bonus data
