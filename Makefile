NAME = libft.a

SOURCES = $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)

HEADER = $(wildcard *.h)

CFLAGS += -Wall -Wextra -Werror


all: $(OBJECTS) $(NAME)

$(NAME):
	ar rc $(NAME) $(OBJECTS) $(HEADER)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) $(OBJECTS)
	
re: fclean all
