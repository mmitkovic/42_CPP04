# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 13:58:20 by mmitkovi          #+#    #+#              #
#    Updated: 2026/01/21 12:00:42 by mmitkovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= materia

CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

SRCS    := main.cpp \
           AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp

OBJS    := $(SRCS:.cpp=.o)

DEPS    := AMateria.hpp \
	   Character.hpp \
	   Cure.hpp \
	   Ice.hpp \
	   ICharacter.hpp \
	   MateriaSource.hpp \
	   IMateriaSource.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re