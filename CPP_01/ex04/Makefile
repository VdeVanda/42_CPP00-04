NAME 		= sed
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM			= rm -rf
SRC 		= main.cpp
OBJ		= ${SRC:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}
	@echo "sed is ready."
	@echo "A program that opens a file and copies its content into a new file <filename>.replace,"
	@echo "replacing every occurrence of a string <s1> with another string <s2>."
	@echo "Usage: ./sed <filename> <search> <replace>"

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: all, clean, fclean, re
