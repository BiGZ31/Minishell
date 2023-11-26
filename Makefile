NAME = minishell

LIBFT = $(LIBS_DIR)/libft.a


OBJS_DIR = objs
INCS_DIR = includes
LIBS_DIR = libs

VPATH = ./srcs:\
	./srcs/check_input: \

SRCS = $(notdir $(wildcard srcs/*.c srcs/*/*.c srcs/*/*/*.c srcs/*/*/*/*.c))
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))
CC = gcc
CFLAGS = -Werror -Wextra -Wall

############################################################################

all: $(LIBFT)  $(NAME) 

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -g $(OBJS) -o $@ -L $(LIBS_DIR) -lft -lreadline $(INCS_DIR0)

$(OBJS_DIR)/%.o: %.c 
	@if [ ! -d $(OBJS_DIR) ]; then	\
		mkdir $(OBJS_DIR);			\
		echo mkdir $(OBJS_DIR);		\
	fi
	$(CC) $(CFLAGS) -g -c $< -o $@ -L $(LIBS_DIR) -lft -I $(INCS_DIR)

$(LIBFT):
	make -s -C $(LIBS_DIR)/libft
	rsync -a $(LIBS_DIR)/libft/libft.a $(LIBS_DIR)/

$(MLIBX):
	make -s -C $(LIBS_DIR)/mlibx
	rsync -a $(LIBS_DIR)/mlbx/libmx.a $(LIBS_DIR)/

clean:
	rm -rf $(OBJS_DIR)/*.o
	make clean -s -C $(LIBS_DIR)/libft
	make clean -s -C $(LIBS_DIR)/mlibx
	
fclean: clean
	rm -rf $(NAME) $(LIBFT) $(MLIBX)
	make fclean -s -C $(LIBS_DIR)/libft
	make clean -s -C $(LIBS_DIR)/mlibx

re: fclean all

############################################################################


.PHONY: all clean fclean re 