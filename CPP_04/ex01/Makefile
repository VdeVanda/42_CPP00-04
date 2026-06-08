NAME 		= Brain
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
SRCS 		= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "Brain is ready."
	@echo "Usage: ./Brain"

%.o:%.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: all, clean, fclean, re
