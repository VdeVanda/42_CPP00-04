NAME 		= Brain
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
SRC 		= main.cpp
OBJ		= ${SRC:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}
	@echo "Brain is ready."
	@echo "Usage: ./Brain"

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: all, clean, fclean, re
