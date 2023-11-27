NAME = minishell
LIBS_DIR = libs
LIBFT = $(LIBS_DIR)/libft.a
OBJS_DIR = objs
INCS_DIR = includes

VPATH = srcs:\
	srcs/main_functions:\
	srcs/builtin_implementations:\
	srcs/builtin_implementations/pipe_only:\
	srcs/parsing:\
	srcs/fork:\
	srcs/pipe:\
	srcs/tools:\
	srcs/extra:

SRCS = $(notdir $(wildcard srcs/*.c srcs/*/*.c srcs/*/*/*.c srcs/*/*/*/*.c))
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))
CC = gcc
CFLAGS = -Werror -Wextra -Wall

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -g $(OBJS) -o $@ -L $(LIBS_DIR) -lft -lreadline

$(OBJS_DIR)/%.o: %.c
	@if [ ! -d $(OBJS_DIR) ]; then \
		mkdir $(OBJS_DIR);          \
		echo mkdir $(OBJS_DIR);     \
	fi
	$(CC) $(CFLAGS) -g -c $< -o $@ -I $(INCS_DIR)

$(LIBFT):
	make -s -C $(LIBS_DIR)/libft
	rsync -a $(LIBS_DIR)/libft/libft.a $(LIBS_DIR)/

clean:
	rm -rf $(OBJS_DIR)/*.o
	make clean -s -C $(LIBS_DIR)/libft

fclean: clean
	rm -rf $(NAME) $(LIBFT)
	make fclean -s -C $(LIBS_DIR)/libft

re: fclean all

.PHONY: all clean fclean re
