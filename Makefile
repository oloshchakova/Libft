NAME = libft.a

SOURCES = $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)

HEADERS = $(wildcard *.h)

CFLAGS += -Wall -Wextra -Werror


all: $(OBJECTS) $(NAME) norminette


$(OBJECTS):$(SOURCES)
	gcc -c $(SOURCES) $(CFLAGS)

$(NAME):
	gcc -o $(NAME) $(OBJECTS) $(CFLAGS)

norminette:
	norminette $(SOURCES) $(HEADERS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) $(OBJECTS)
	
re: fclean all
