# Make file for a simple c project 

# Compiler
CC = gcc

# Compiler flags 
CFLAGS = -Wall -Wextra -std=c11 -pedantic -g

# Source files 
SRC = main.c

# Ouput executable
TARGET = my_program

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean rule
clean:
	rm -f $(TARGET)
