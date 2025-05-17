
BGRN		:=	\033[1;32m
CYN			:=	\033[0;36m
BRED		:=	\033[1;31m
BMAG		:=	\033[1;35m
BOLD		:=	\033[1m
NC			:=	\033[0m

CXX			:=	c++
CPPFLAGS  	:=  -I. -MMD -MP
CXXFLAGS  	:=  -Wall -Werror -Wextra -std=c++98

NAME		:=	convert

SRCS		:= 	main.cpp \
				Serializer.cpp \

HEADERS		:= 	Serializer.hpp

BUILD_DIR	:=	.build
OBJS		:=	$(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

all: init show_flags $(NAME) finish

run: init show_flags $(NAME) finish
	./$(NAME)

$(NAME): $(OBJS)
	@echo -n " Linking..."
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME) && echo "\t$(BGRN)Linking successful!$(NC)\n"

$(BUILD_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(BUILD_DIR)
	@echo -n " [⧖] Compiling :\t$(CYN)$<...$(NC)"
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ -c $< && echo "\r [$(BGRN)✓$(NC)]"

clean:
	@rm -rf $(BUILD_DIR)
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
	@echo "$(CYN)$(CXX) $(CXXFLAGS) $(CPPFLAGS)$(NC)\n"

debug: fclean
	@$(MAKE) --no-print-directory CXXFLAGS+="-g -Wall -Werror -Wextra -std=c++98"

valgrind:
	@$(MAKE) --no-print-directory CXXFLAGS+="-g -Wall -Werror -Wextra -std=c++98"
	valgrind ./$(NAME)

sanity:
	@$(MAKE) --no-print-directory CXXFLAGS+="-fsanitize=address -g -Wall -Werror -Wextra -std=c++98"
	./$(NAME)

-include $(OBJS:.o=.d)

.PHONY: all clean fclean re init finish show_flags debug sanity