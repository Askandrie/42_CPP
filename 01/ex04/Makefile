# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aska <aska@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 12:53:10 by aska              #+#    #+#              #
#    Updated: 2025/02/26 02:41:47 by aska             ###   ########.fr        #
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

NAME	:=	SedIsForLosers

SRCS	:=	main.cpp 

HEADERS	:=	
			
OBJS	:=	$(SRCS:.cpp=.o)

all: init show_flags $(NAME) finish

%.o: %.cpp $(HEADERS)
	@echo -e -n " [⧖] Compiling :\t$(CYN)$<...$(NC)"
	@$(CXX) $(CXXFLAGS) -o $@ -c $< && echo -e "\r [$(BGRN)✓$(NC)]"

$(NAME): $(OBJS)
	@echo -e "\n Linking :\t$(CYN)$(OBJS)...$(NC)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f *.o
	@echo -e "$(BRED)Object files removed$(NC)\n"
	
fclean: clean
	@rm -f $(NAME)
	@echo -e "$(BRED)$(NAME) executable removed completely$(NC)\n"

re: fclean all

init:
	@echo -e "\n\t$(BMAG)Starting $(NAME) compilation$(NC) [C++]\n"

finish:
	@echo -e "\t$(BGRN)Compilation of $(NAME) completed!$(NC)\n"

show_flags:
	@echo -e -n " Flags used : $(NC)"
	@echo -e "$(CYN)$(CXX) $(CXXFLAGS)$(NC)\n"

debug:
	@$(MAKE) CXXFLAGS+="-g -Wall -Werror -Wextra -std=c++98"

sanity:
	@$(MAKE) CXXFLAGS+="-fsanitize=address -g -Wall -Werror -Wextra -std=c++98"
	
.PHONY: all clean fclean re init finish show_flags debug sanity