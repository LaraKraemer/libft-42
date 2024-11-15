# @ represent the target e.g. filename 
# $< first dependenczy of rule 
# $^: 
# current dir: -I.
CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I. -Itests/unity/src

NAME = libft.a

SRC = \
    ft_strlen.c \
    ft_strlcat.c \
    ft_isalpha.c \
    ft_isdigit.c \
    ft_isalnum.c \
    ft_isascii.c \
    ft_isprint.c \
    ft_memset.c \
    ft_strncmp.c \
    ft_bzero.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_strlcpy.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_strnstr.c \
    ft_atoi.c \
    ft_calloc.c \
    ft_strdup.c \
    ft_substr.c \
    ft_strjoin.c \


# Object files - .c files
OBJ = $(SRC:.c=.o)

# Default target
all: $(NAME)

# Create library  from object files
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile src file in out files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean: Remove .out files 
clean:
	rm -f $(OBJ) $(TEST_OBJ)

# Full clean: Remove .out files & libary 
fclean:	clean
	rm -f $(NAME) $(TEST_EXEC)

# Rebuild all
re:	fclean all


# TEST STUFF DELETE before pushing
UNITY_SRC = tests/unity/src/unity.c
TEST_SRC = tests/test_libft.c
TEST_EXEC = test_libft

# Object files for tests
TEST_OBJ = $(TEST_SRC:.c=.o)

# Compile the test executable
$(TEST_EXEC): $(SRC) $(UNITY_SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) $^ -o $(TEST_EXEC)

# Run the tests
test: $(TEST_EXEC)
	./$(TEST_EXEC)

# Phony targets
.PHONY: all clean fclean re test