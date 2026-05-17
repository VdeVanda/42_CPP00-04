# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/16 18:25:15 by vabatist          #+#    #+#              #
#    Updated: 2026/05/17 17:00:38 by vabatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME 		= megaphone
RM			= rm -rf
SRC 		= megaphone.cpp
OBJ		= ${SRC:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}
	@echo "Megaphone is ready. \nUsage: ./megaphone \"Your message here\""

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: clean, fclean, all, re
