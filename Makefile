CC = gcc
CFLAGS = -g -Wall -I.
TARGET = introduce.exe
SRCS = $(wildcard *.c)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)