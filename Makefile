SRCS = main.c stack_init.c errors.c ft_split.c push_command.c push_swap_command.c push_swap_init.c reverse_rotate_command.c rotate_command.c small_sort.c stack_utils.c swap_command.c

OBJS = $(SRCS:%.c=%.o)

NAME = push_swap

CC = cc 

CFLAGS = -Wall -Wextra -Werror

RM = rm -f 

all: $(NAME)

%.o:	%.c 
		$(CC) $(CFLAGS) -Iprintf -c $? -o $@

$(NAME):		$(OBJS)
		@make -C printf
		cp printf/libftprintf.a $(NAME)
		$(CC) $(CFLAGS) $^ -Lprintf -lftprintf -o $(NAME)

printf:
		make -C printf
		cp printf/libftprintf.a $(NAME)

clean:
		make clean -C printf
		$(RM) $(OBJS)

fclean:	clean
				$(RM) $(NAME)

re:				fclean all