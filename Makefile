CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -pedantic
TARGET = main
SRCS = main.c FindMissingNumbers.c
OBJS = $(SRCS:.c=.o)
HEADERS = FindMissingNumbers.h

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

main.o: main.c $(HEADERS)
FindMissingNumbers.o: FindMissingNumbers.c $(HEADERS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

