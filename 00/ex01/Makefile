# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 12:53:10 by aska              #+#    #+#              #
#    Updated: 2024/11/15 16:15:16 by ygaiffie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BGRN	:=	\033[1;32m
CYN		:=	\033[0;36m
BRED	:=	\033[1;31m
BMAG	:=	\033[1;35m
BOLD	:=	\033[1m
NC		:=	\033[0m

CXX		:=	c++
CFLAGS  :=  -Wall -Werror -Wextra -g -std=c++98

NAME	:=	phonebook

SRCS	:=	PhoneBook.cpp \
			Contact.cpp \
			main.cpp

HEADERS	:=	PhoneBook.hpp \
			Contact.hpp \
			Colors.hpp \
			main.hpp
			
OBJS	:=	$(SRCS:.cpp=.o)

all: init $(NAME) finish

%.o: %.cpp $(HEADERS)
	@echo -n "Compiling :\t$(CYN)$<...$(NC)"
	@$(CXX) $(CFLAGS) -o $@ -c $<
	@echo "\t$(BGRN)successfully$(NC)"

$(NAME): $(OBJS)
	@echo -n "\nLinking :\t$(CYN)$(OBJS)...$(NC)"
	@$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\t$(BGRN)successfully$(NC)\n"

clean:
	@rm -f *.o
	@echo "$(BRED)Object files removed$(NC)\n"
	
fclean: clean
	@rm -f $(NAME)
	@echo "$(BRED)$(NAME) removed completely$(NC)\n"

re: fclean all

init:
	@echo "\n\t$(BMAG)Starting $(NAME) compilation$(NC) [C++]\n"

finish:
	@echo "\t$(BGRN)Compilation of $(NAME) completed!$(NC)\n"