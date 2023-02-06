CC	=	c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	=	Weapon

SRC		=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \

all: $(NAME)

$(NAME):	$(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all