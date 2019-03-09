# Main var

NAME = fillit

# GCC

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I libft/ -I .

# Sources & Objects
SRCS =	main.c \
		errors.c \
		parser.c \
		map.c \
		tetri_modifier.c \
		solver.c \

OBJS = $(patsubst %.c, %.o, $(SRCS))

# Includes

INCLUDES = -L libft/ -lft

# Utils
RM = rm -rf
LIBFT = libft/

# Compiling & other stuff

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJS) fillit.h
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJS)
	@make clean -C $(LIBFT)
fclean : clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT)

re : fclean all

.PHONY : all clean fclean re
