CC = c++
CFLAGS = -Wall -Wextra -Werror
TARGET = zombie
SRCS = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp \

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) 

$(OBJS): $(SRCS)
	$(CC) -c $(SRCS)

.PHONY: all re clean fclean

all: $(TARGET)

fclean:
	rm -f $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS)

re: fclean all 