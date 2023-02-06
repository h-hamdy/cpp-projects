CC	=	c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	=	Zombie

SRC		=	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \

all: $(NAME)

$(NAME):	$(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean all
