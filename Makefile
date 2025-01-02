# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Directories
SRC_DIR = src
BIN_DIR = bin
INCLUDE_DIR = include

# Target executable
TARGET = main

# Source and object files
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%.o, $(SOURCES))

# Rule for build executable
$(TARGET): $(OBJECTS)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(TARGET) $(OBJECTS)

# Rule for build object file
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule for running the program
run: $(TARGET)
	./$(BIN_DIR)/$(TARGET)

# Rule for clean up bin
clean:
	rm -rf $(BIN_DIR)

# Phony targets for avoid concflict with same file name
.PHONY: clean run
