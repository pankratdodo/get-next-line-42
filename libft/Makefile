CC := gcc

NAME := libft.a

FLAGS := -Wall -Wextra -Werror

INCLUDE := .

SOURCE = $(wildcard ft_*.c)

OBJECTS = $(patsubst %.c,%.o,$(SOURCE))

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)

%.o : %.c libft.h
	@$(CC) -c $(FLAGS) $(SOURCE) -I$(INCLUDE)

clean :
	@rm -rf $(wildcard ft_*.o)

fclean : clean
	@rm -rf $(NAME)

re : fclean all