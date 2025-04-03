NAME = FragTrap
SRC_DIR = ./src/
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
NEW_SRCS = $(addprefix $(SRC_DIR), $(SRCS))
OBJS = $(NEW_SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)
$(NAME)	: $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo '$(NAME) compiled!'
		
$(OBJS): $(NEW_SRCS)

clean	:
		@$(RM) $(OBJS)

fclean	: clean
		@$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re