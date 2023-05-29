# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 09:43:44 by fpolaris          #+#    #+#              #
#    Updated: 2023/05/22 11:21:46 by fpolaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror
SRCS_FILES	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strjoin.c ft_split.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_strrchr.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_substr.c
SRCS_BONUS	=	ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstmap_bonus.c ft_lstclear_bonus.c ft_lstnew_bonus.c ft_lstdelone_bonus.c ft_lstsize_bonus.c ft_lstiter_bonus.c
AR		=	ar rcs
RM		=	rm -rf
OBJS		=	$(SRCS_FILES:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS_FILES)
	$(CC) $(CFLAGS) -c $(SRCS_FILES) -I .

$(OBJS_BONUS): $(SRCS_BONUS)
	$(CC) $(CFLAGS) -c $(SRCS_BONUS) -I .
	
bonus: $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS) libft.h

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re bonus
