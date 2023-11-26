# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumontgo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 16:53:42 by lumontgo          #+#    #+#              #
#    Updated: 2023/02/10 12:53:10 by lumontgo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a	

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcpy.c \
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
	ft_putendl_fd.c ft_striteri.c ft_memcmp.c ft_memchr.c ft_strlcat.c ft_split.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_strjoin.c

OBJS = ${SRCS:.c=.o}

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstitter.c ft_lstmap.c

BONUS_OBJS	= $(BONUS:.c=.o)

RM = rm -f

CC = gcc

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean ${NAME}

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)