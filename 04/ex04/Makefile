# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aska <aska@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 12:53:10 by aska              #+#    #+#              #
#    Updated: 2025/03/04 02:52:45 by aska             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BGRN	:=	\033[1;32m
CYN		:=	\033[0;36m
BRED	:=	\033[1;31m
BMAG	:=	\033[1;35m
BOLD	:=	\033[1m
NC		:=	\033[0m

NAME	:=	Interface_&_recap

CXX		:=	c++
CXXFLAGS  :=  -Wall -Werror -Wextra -g -std=c++98
CPPFLAGS  :=  -I. -MMD -MP

SRCS	:=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			Brain.cpp

HEADERS	:=	Colors.hpp \
			Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			Brain.hpp

BUILD_DIR	:=	.build
OBJS	:=	$(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

all: init show_flags $(NAME) finish

run: init show_flags $(NAME) finish
	./$(NAME)

$(NAME): $(OBJS)
	@echo -n " Linking..."
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME) && echo -e "\t$(BGRN)Linking successful!$(NC)\n"

$(BUILD_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(BUILD_DIR)
	@echo -e -n " [⧖] Compiling :\t$(CYN)$<...$(NC)"
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ -c $< && echo -e "\r [$(BGRN)✓$(NC)]"

clean:
	@rm -rf $(BUILD_DIR)
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
	@echo -e "$(CYN)$(CXX) $(CXXFLAGS) $(CPPFLAGS)$(NC)\n"

debug:
	@$(MAKE) --no-print-directory CXXFLAGS+="-g -Wall -Werror -Wextra -std=c++98"

valgrind:
	@$(MAKE) --no-print-directory CXXFLAGS+="-g -Wall -Werror -Wextra -std=c++98"
	valgrind ./$(NAME)

sanity:
	@$(MAKE) --no-print-directory CXXFLAGS+="-fsanitize=address -g -Wall -Werror -Wextra -std=c++98"

-include $(OBJS:.o=.d)

.PHONY: all clean fclean re init finish show_flags debug sanity