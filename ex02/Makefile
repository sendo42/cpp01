CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = a.out
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

.PHONY: all re fclean clean

all: $(TARGET)

clean:
	rmn -f $(OBJS)

fclean:
	rm -f $(OBJS) $(TARGET)

re: fclean all