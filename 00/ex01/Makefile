# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aska <aska@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 12:53:10 by aska              #+#    #+#              #
#    Updated: 2024/10/28 03:54:02 by aska             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	g++
BGREEN  :=  \033[1;32m
BHYEL   :=  \033[1;93m
NC      :=  \033[0m
CFLAGS  :=  -Wall -Werror -Wextra -g -std=c++98

NAME	:=	phonebook
SRCS	:=	phonebook.cpp
HEADERS	:=	
OBJS	:=	$(SRCS:.cpp=.o)

all: init $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "$(BGREEN)$(NAME) created$(NC)"

clean:
	@rm -f *.o
	@echo "$(BHYEL)$(NAME) removed $(NC)"
	
fclean:
	@rm -f *.o
	@rm -f $(NAME)
	@echo "$(BHYEL)$(NAME) removed $(NC)"

init:
	@echo "\t$(BHYEL)$(NAME) compilation$(NC)"