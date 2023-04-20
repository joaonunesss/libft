# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 13:00:03 by jmarinho          #+#    #+#              #
#    Updated: 2023/04/20 18:33:16 by jmarinho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_atoi.c ft_calloc.c ft_memchr.c ft_memcmp.c \
	ft_strchr.c ft_strdup.c ft_strlcat.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c \

NAME = libft.a
OBJS = ${SRC:.c=.o}
HEADER = libft.h
RM = rm -f
FLAGS = -Wall -Wextra -Werror

all: ${NAME}
	
.c.o:
	@cc ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	@ar rcs ${NAME} ${OBJS} ${HEADER}

fclean:
	@${RM} *.a *.o *~ run

re: clean all

run: all
	@cc ${FLAGS} -o run main.c ${NAME}
	@${RM} *.a *.o *~
	@./run

.PHONY: all clean re
