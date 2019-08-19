NAME	= sokoban

CC	= gcc

RM	= rm -f

SRCS	= ./src/game.c \
	  ./src/main.c \
	  ./src/move.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./inc/
CFLAGS += -g
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lncurses

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
