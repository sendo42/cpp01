CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = moarbrainz
SRCS = main.cpp \
	Zombie.cpp \
	zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

.Phony: all clean fclean re

all: $(TARGET)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
