# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/16 18:25:15 by vabatist          #+#    #+#              #
#    Updated: 2026/05/16 18:47:05 by vabatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME 		= megaphone
RM			= rm -rf
SRC 		= megaphone.cpp
OBJS		= ${SRC:%.cpp=%.o}

%.o: %.cpp
	@${CXX} ${CXXFLAGS} -c $< -o $@

all: ${NAME}
${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "Megaphone is ready. Usage: ./megaphone \"Your message here\""

clean:
	@${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean, fclean, all, re
