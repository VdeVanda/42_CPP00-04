NAME 		= FragTrap
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
SRCS 		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "FragTrap is ready."
	@echo "Usage: ./FragTrap"

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: all, clean, fclean, re
