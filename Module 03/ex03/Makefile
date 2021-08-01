NAME    = DiamondTrap

SRC     = ClapTrap.cpp \
          DiamondTrap.cpp \
          FragTrap.cpp \
          ScavTrap.cpp \
          main.cpp

OBJ     = $(SRC:.cpp=.o)

CC      = clang++
CFLAGS  = -Wall -Werror -Wextra -Wshadow -Wno-shadow

RM      = rm
RFLAGS  = -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@$(RM) $(RFLAGS) $(OBJ)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(RFLAGS) $(OBJ)

fclean: clean
	@$(RM) $(RFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
