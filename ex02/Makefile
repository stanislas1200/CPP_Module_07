# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 14:39:47 by sgodin            #+#    #+#              #
#    Updated: 2024/01/24 15:21:22 by sgodin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = src/main.cpp\

INCL = include/Array.hpp

NAME =  a.out

GCC = c++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address

OBJS_DIR = ./objects/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

SHELL = bash
RED = \033[1;31m
GREEN = \033[1;32m
BLUE = \033[1;34m
RESET = \033[0m

all: ${NAME}

${NAME}: ${OBJS} ${INCL}
	@${GCC} ${OBJS} -o ${NAME} && echo -ne "\r${BLUE}Compiling ${NAME} ${GREEN}Done${RESET}\n" || echo -ne "\r${BLUE}Compiling ${NAME} ${RED}Error${RESET}\n"

$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@ ${GCC} -c $< -o $@

clean:
	@echo -ne "${RED}Cleaning...${RESET}"
	@rm -f ${OBJS} && echo -ne "\r${RED}Cleaning ${GREEN}Done${RESET}\n" || echo -ne "\r${RED}Cleaning ${RED}Error${RESET}\n"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.cpp.o:
	@echo -ne "${BLUE}Compiling $<${RESET}"
	@${GCC} -c $< -o ${<:.cpp=.o} && echo -ne "\r\033[K"

.PHONY: all clean fclean re .cpp.o bonus