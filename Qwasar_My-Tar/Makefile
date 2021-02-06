NAME = tar

CC = gcc
CFLAGS += -Wall -o -c -Werror -Wextra -I
FILENAMES 	= 	main.c \
			options.c \
			extra_func.c \

OBJ = $(FILENAMES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): %.o:%.c
	$(CC) $(CFLAGS) -I -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all