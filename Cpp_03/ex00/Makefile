CC	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	ClapTrap

SRC	=	ClapTrap.cpp \
		main.cpp \

all:	$(NAME)

$(NAME): $(SRC)
	@ $(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all