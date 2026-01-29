# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 14:04:44 by mmitkovi          #+#    #+#              #
#    Updated: 2026/01/20 14:04:45 by mmitkovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= animal

CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

SRCS    := main.cpp \
           Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp

OBJS    := $(SRCS:.cpp=.o)

DEPS    := Animal.hpp \
	   Cat.hpp \
	   Dog.hpp \
	   WrongAnimal.hpp \
	   WrongCat.hpp

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
