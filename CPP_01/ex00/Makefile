NAME 		= Zombie
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
SRCS 		= main.cpp Zombie.cpp randomChump.cpp newZombie.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "Zombie is ready."
	@echo "Usage: ./Zombie"

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

va: $(NAME)
	@valgrind --leak-check=full -s ./$(NAME)

.PHONY: all, clean, fclean, re
