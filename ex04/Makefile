CC = c++
# CFLAGS = -Wall -Werror -Wextra
TARGET = a.out
SRCS = FileStr.cpp \
	main.cpp 
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

.PHONY: all re fclean clean

all: $(TARGET)

fclean: clean
	rm -f $(TARGET)

clean:
	rm -f $(OBJS)

re: fclean all