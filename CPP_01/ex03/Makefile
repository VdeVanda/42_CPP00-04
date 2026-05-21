NAME 		= Weapon
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM			= rm -rf
SRCS 		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "Weapon is ready."
	@echo "Usage: ./Weapon"

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

va: $(NAME)
	@valgrind --leak-check=full -s ./$(NAME)

.PHONY: all, clean, fclean, re
