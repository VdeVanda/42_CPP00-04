NAME 		= fixed
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM			= rm -rf
SRCS 		= main.cpp Fixed.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "fixed is ready."
	@echo "Usage: ./fixed"

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: all, clean, fclean, re
