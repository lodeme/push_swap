NAME = push_swap
LIBFT = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRC = push_swap.c \
	  utils.c \
	  utils_find.c \
	  core_operations.c \
	  top_operations.c \
	  top_operations_1.c \
	  top_operations_2.c \
	  list_builder.c \
	  list_check.c \
	  radix_sort.c \
	  insertion_sort.c
OBJ = $(SRC:%.c=%.o)
HEADERS = push_swap.h libft/libft.h

# Color and Checkmark Definitions
GREY=\033[1;33m
CHECK=\033[0;32m✔\033[0m

# Flag File
COMPILATION_FLAG_FILE=.compilation_started

all: $(NAME)

$(LIBFT):
	@echo "${GREY}====> Compiling libft..."
	@make bonus -C libft > /dev/null
	@echo "${CHECK} Compiled libft"

$(NAME): $(LIBFT) $(OBJ) $(HEADERS)
	@echo "${GREY}====> Creating program $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -Llibft -lft
	@echo "${CHECK} Created $(NAME) program"
	@$(RM) $(COMPILATION_FLAG_FILE)

%.o: %.c
	@if [ ! -f $(COMPILATION_FLAG_FILE) ]; then \
		echo "${GREY}====> Compiling push_swap"; \
		touch $(COMPILATION_FLAG_FILE); \
	fi
	@$(CC) $(CFLAGS) -c $< -o $@ > /dev/null
	@echo "${CHECK} Compiled $<"

clean:
	@echo "${GREY}====> Cleaning up object files..."
	@$(RM) $(OBJ) $(COMPILATION_FLAG_FILE) > /dev/null
	@make clean -C libft > /dev/null
	@echo "${CHECK} Cleanup complete"

fclean: clean
	@echo "${GREY}====> Full clean - Removing library and program"
	@$(RM) $(NAME) > /dev/null
	@make fclean -C libft > /dev/null
	@echo "${CHECK} Full cleanup complete"

re: fclean all

.PHONY: all clean fclean re
