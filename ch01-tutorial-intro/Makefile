CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC_DIR = src
BIN_DIR = bin

SOURCES = $(wildcard $(SRC_DIR)/*.c)
BINARIES = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SOURCES))

all: $(BINARIES)

$(BIN_DIR)/%: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean