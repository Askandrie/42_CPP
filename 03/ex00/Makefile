# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 12:53:10 by aska              #+#    #+#              #
#    Updated: 2025/03/11 12:36:44 by ygaiffie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BGRN	:=	\033[1;32m
CYN		:=	\033[0;36m
BRED	:=	\033[1;31m
BMAG	:=	\033[1;35m
BOLD	:=	\033[1m
NC		:=	\033[0m

CXX		:=	c++
CXXFLAGS  :=  -Wall -Werror -Wextra -g -std=c++98

NAME	:=	Aaaaand...OPEN!

SRCS	:=	main.cpp \
			ClapTrap.cpp \

HEADERS	:=	ClapTrap.hpp 
			
OBJS	:=	$(SRCS:.cpp=.o)

all: init show_flags $(NAME) finish

%.o: %.cpp $(HEADERS)
	@echo -n " [⧖] Compiling :\t$(CYN)$<...$(NC)"
	@$(CXX) $(CXXFLAGS) -o $@ -c $< && echo "\r [$(BGRN)✓$(NC)]"

$(NAME): $(OBJS)
	@echo "\n Linking :\t$(CYN)$(OBJS)...$(NC)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f *.o
	@echo "$(BRED)Object files removed$(NC)\n"
	
fclean: clean
	@rm -f $(NAME)
	@echo "$(BRED)$(NAME) executable removed completely$(NC)\n"

re: fclean all

init:
	@echo "\n\t$(BMAG)Starting $(NAME) compilation$(NC) [C++]\n"

finish:
	@echo "\t$(BGRN)Compilation of $(NAME) completed!$(NC)\n"

show_flags:
	@echo -n " Flags used : $(NC)"
	@echo "$(CYN)$(CXX) $(CXXFLAGS)$(NC)\n"

debug:
	@$(MAKE) CXXFLAGS+="-g -Wall -Werror -Wextra -std=c++98"

sanity:
	@$(MAKE) CXXFLAGS+="-fsanitize=address -g -Wall -Werror -Wextra -std=c++98"
	
.PHONY: all clean fclean re init finish show_flags debug sanity