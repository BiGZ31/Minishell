PROG    = minishell

SRCS    = main.c
OBJS    = ${SRCS:.c=.o}

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -g
RED     = \033[91m     # Red color code
PURPLE  = \033[95m     # Purple color code
NC      = \033[0m       # Reset to default color

all: ${PROG}

${PROG}: ${OBJS}
	@$(CC) ${OBJS} -o ${PROG} -lreadline
	@echo "${PURPLE}Compiled correctly${NC}"

${OBJS}: %.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f $(NAME)
	@rm -f ${PROG}
	@echo "${RED}Cleaned all files${NC}"

re: fclean all

.PHONY: all clean fclean re
