# A simple Makefile

# set the compiler
CC := gcc

# set the compiler flags
CFLAGS := -Wall -Wextra -std=c11 -pedantic

SRCS = $(wildcard src/*/*.c src/*.c *.c )
HDRS = $(wildcard src/*/.h src/*.h *.h)

# generate names of object files
OBJS = ${SRCS:.c=.o}

# name of executable
EXEC := linkedlist

# recipe for building the final executable
$(EXEC): $(OBJS) $(HDRS) Makefile
	$(CC) -o $@ $(OBJS) $(CFLAGS)

# default recipe
all: $(EXEC)

# recipe for building object files
#$(OBJS): $(@:.o=.c) $(HDRS) Makefile
#	$(CC) -o $@ $(@:.o=.c) -c $(CFLAGS)

# recipe to clean the workspace
clean:
	rm -f $(EXEC) $(OBJS)

# recipe for building the final executable and running it
run: ./$(EXEC)

.PHONY: all clean
