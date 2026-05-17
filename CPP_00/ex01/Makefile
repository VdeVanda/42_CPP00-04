# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/17 12:21:34 by vabatist          #+#    #+#              #
#    Updated: 2026/05/17 16:58:13 by vabatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME 		= PhoneBook
RM			= rm -rf
SRCS 		= main.cpp PhoneBook.cpp Contact.cpp
OBJS		= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "PhoneBook is ready. \nUsage: ./PhoneBook"

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	@echo "Goodbye!"

re: fclean all

.PHONY: clean, fclean, all, re
