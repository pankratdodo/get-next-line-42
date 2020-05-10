CC := gcc

NAME := gnl

FLAGS := -g

LIB := ./libft/libft.a

SOURCE := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCE))

all: $(NAME)

$(OBJECTS): %.o : %.c
	@$(CC) $(FLAGS) -c $(SOURCE)

$(LIB):
	@make -C libft/

$(NAME): $(OBJECTS) $(LIB)
	@$(CC) $(FLAGS) $(OBJECTS) $(LIB) -o $(NAME) -lm

clean :
	@rm -rf $(OBJECTS)
	@make -C libft/ clean

fclean : clean
	@rm -rf $(NAME)
	@make -C libft/ fclean

re : fclean all