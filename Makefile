# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 12:28:01 by aalatzas          #+#    #+#              #
#    Updated: 2023/10/19 04:15:53 by aalatzas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

bonus:	$(OBJ_BONUS)
		ar rcs $(NAME) $(OBJ_BONUS)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re
