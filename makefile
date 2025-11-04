# Define the C compiler
CC = gcc

# Define compilation flags
# -Wall: Enable all common warnings
# -g: Include debugging information
CFLAGS = -Wall -g

# Define the executable name
TARGET = agenda

# Define the source files
SRCS = main.c contatos.c 

# Automatically generate object file names from source files
OBJS = $(SRCS:.c=.o)

# Default target: builds the executable
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to compile C source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target: removes generated files
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)