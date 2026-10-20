CC = gcc
CFLAGS = -g -Wall -I.

DIR ?= tasks/introduce/reverseSegmentsArray
TARGET = introduce.exe
SRCS = $(wildcard $(DIR)/*.c)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

.PHONY: clean
clean:
	del /Q $(TARGET) 2>nul || rm -f $(TARGET)