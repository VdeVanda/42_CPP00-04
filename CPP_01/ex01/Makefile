NAME 		= zombieHorde
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
SRCS 		= main.cpp Zombie.cpp zombieHorde.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "Zombie Horde is ready."
	@echo "Usage: ./zombieHorde"

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

va: $(NAME)
	@valgrind --leak-check=full -s ./$(NAME)

.PHONY: all, clean, fclean, re
