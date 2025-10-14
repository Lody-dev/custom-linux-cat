NAME    = custom-linux-cat 
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -Iincludes

# --- Folders ---
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = lib 

# --- Files ---
SRC     = $(wildcard $(SRC_DIR)/*.c)
OBJ     = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
HEADER  = $(wildcard $(INC_DIR)/*.h)

# --- Default Target ---
all: $(NAME)

$(NAME): $(OBJ)
	@echo "🔧 Linking $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ Build complete!"

# --- Compile .c → .o ---
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER) | $(OBJ_DIR)
	@echo "🧩 Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

# --- Ensure obj/ folder exists ---
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# --- Cleanup ---
clean:
	@echo "🧹 Removing object files..."
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "🗑️  Removing executable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
