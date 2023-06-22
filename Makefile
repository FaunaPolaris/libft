# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 09:43:44 by fpolaris          #+#    #+#              #
#    Updated: 2023/06/22 15:26:28 by fpolaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

SRC_MANDATORY	=	mandatory/ft_atoi.c mandatory/ft_bzero.c mandatory/ft_calloc.c 
SRC_MANDATORY	+=	mandatory/ft_memchr.c mandatory/ft_memcmp.c mandatory/ft_memcpy.c 
SRC_MANDATORY	+=	mandatory/ft_memmove.c mandatory/ft_memset.c mandatory/ft_strchr.c 
SRC_MANDATORY	+=	mandatory/ft_strdup.c mandatory/ft_strlen.c mandatory/ft_strncmp.c 
SRC_MANDATORY	+=	mandatory/ft_tolower.c mandatory/ft_toupper.c mandatory/ft_isalnum.c 
SRC_MANDATORY	+=	mandatory/ft_isalpha.c mandatory/ft_isascii.c mandatory/ft_isdigit.c 
SRC_MANDATORY	+=	mandatory/ft_isprint.c mandatory/ft_itoa.c mandatory/ft_putchar_fd.c 
SRC_MANDATORY	+=	mandatory/ft_putendl_fd.c mandatory/ft_putnbr_fd.c mandatory/ft_putstr_fd.c 
SRC_MANDATORY	+=	mandatory/ft_strjoin.c mandatory/ft_split.c mandatory/ft_strlcat.c 
SRC_MANDATORY	+=	mandatory/ft_strlcpy.c mandatory/ft_strnstr.c mandatory/ft_strrchr.c 
SRC_MANDATORY	+=	mandatory/ft_striteri.c mandatory/ft_strmapi.c mandatory/ft_strtrim.c mandatory/ft_substr.c

SRCS_BONUS	=	bonus/ft_lstadd_back_bonus.c bonus/ft_lstlast_bonus.c bonus/ft_lstadd_front_bonus.c 
SRCS_BONUS	+=	bonus/ft_lstmap_bonus.c bonus/ft_lstclear_bonus.c bonus/ft_lstnew_bonus.c bonus/ft_lstdelone_bonus.c bonus/ft_lstsize_bonus.c bonus/ft_lstiter_bonus.c

SRC_DATA	=	data/grid/fp_alloc_grid.c data/grid/fp_fill_grid.c

AR		=	ar rcs
RM		=	rm -rf
OBJS_MANDATORY	=	$(SRCS_MANDATORY:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)
OBJS_DATA	=	$(SRCS_DATA:.c=.o)

all: $(NAME)

$(NAME):$(OBJS_MANDATORY)
	@$(AR) $(NAME) $(OBJS_MANDATORY)

$(OBJS_MANDATORY): $(SRCS_MANDATORY)
	@$(CC) $(CFLAGS) -c $(SRCS_MANDATORY) -I header

$(OBJS_BONUS): $(SRCS_BONUS)
	@$(CC) $(CFLAGS) -c $(SRCS_BONUS) -I header

$(OBJS_DATA): $(SRCS_DATA)
	@$(CC) $(CFLAGS) -c $(SRC_DATA) -I header
	
bonus: $(OBJS_BONUS)
	@$(AR) $(NAME) $(OBJS_BONUS)

data: $(OBJS_DATA)
	@$(AR) $(NAME) $(OBJS_DATA)

full: all bonus data

clean:
	@$(RM) $(OBJS) $(OBJS_BONUS) $(OBJS_DATA) ft*.o fp*.o

fclean: clean
	@$(RM) $(NAME) $(OBJS_BONUS) $(OBJS_DATA)

re: fclean all

.PHONY: clean all fclean re bonus data
