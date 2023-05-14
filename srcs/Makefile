# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 09:43:44 by fpolaris          #+#    #+#              #
#    Updated: 2023/05/14 09:43:47 by fpolaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror
SRCS_FILES	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_strrchr.c ft_striteri.c ft_strmapi.c ft_strnequ.c ft_strnew.c ft_strtrim.c
AR		=	ar rc
RM		=	rm -rf
OBJS		=	$(SRCS_FILES:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRCS_FILES) libft.h

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re
