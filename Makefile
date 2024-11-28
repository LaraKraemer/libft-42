# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 18:10:29 by lkramer           #+#    #+#              #
#    Updated: 2024/11/28 15:32:33 by lkramer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC          = cc 

CFLAGS      = -Wall -Wextra -Werror -I. -Itests/unity/src

NAME        = libft.a

SRC         = \
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
            ft_strtrim.c \
            ft_split.c \
            ft_itoa.c \
            ft_strmapi.c \
            ft_striteri.c \
            ft_putchar_fd.c \
            ft_putstr_fd.c \
            ft_putendl_fd.c \
            ft_putnbr_fd.c \


# Object files - .c files
OBJ         = $(SRC:.c=.o)

BONUS       = \
            ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

BONUS_OBJ   = $(BONUS:.c=.o)

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
	rm -f $(OBJ) $(TEST_OBJ) $(BONUS_OBJ)

# Full clean: Remove .out files & libary 
fclean:	clean
	rm -f $(NAME) $(TEST_EXEC) $(BONUS_OBJ)

# Rebuild all
re:	fclean all

bonus: $(NAME) $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ) 

# TEST STUFF DELETE before pushing
UNITY_SRC = tests/unity/src/unity.c
TEST_SRC = tests/test_libft.c
TEST_EXEC = test_libft

# Object files for tests
TEST_OBJ = $(TEST_SRC:.c=.o)

# Compile the test executable
$(TEST_EXEC): $(SRC) $(BONUS) $(UNITY_SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) $^ -o $(TEST_EXEC)

# Run the tests
test: $(TEST_EXEC)
	./$(TEST_EXEC)


# Phony targets
.PHONY: all clean fclean re bonus test
