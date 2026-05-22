NAME 		= Harl
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM			= rm -rf
SRCS 		= main.cpp Harl.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "Harl is ready to complain."
	@echo "Usage: ./Harl"

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: all, clean, fclean, re
