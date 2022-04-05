# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 14:50:05 by abellakr          #+#    #+#              #
#    Updated: 2022/04/05 16:16:50 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Reset
Color_Off='\033[0m'       # Text Reset

# Regular Colors
Black='\033[0;30m'        # Black
Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
Yellow='\033[0;33m'       # Yellow
Blue='\033[0;34m'         # Blue
Purple='\033[0;35m'       # Purple
Cyan='\033[0;36m'         # Cyan
White='\033[0;37m'        # White

# Bold
BBlack='\033[1;30m'       # Black
BRed='\033[1;31m'         # Red
BGreen='\033[1;32m'       # Green
BYellow='\033[1;33m'      # Yellow
BBlue='\033[1;34m'        # Blue
BPurple='\033[1;35m'      # Purple
BCyan='\033[1;36m'        # Cyan
BWhite='\033[1;37m'       # White

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

define HEADER_PUSH_SWAP 
		██████╗░██╗░░░██╗░██████╗██╗░░██╗░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░
		██╔══██╗██║░░░██║██╔════╝██║░░██║██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗
		██████╔╝██║░░░██║╚█████╗░███████║╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝
		██╔═══╝░██║░░░██║░╚═══██╗██╔══██║░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░
		██║░░░░░╚██████╔╝██████╔╝██║░░██║██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░
		╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░
endef

export HEADER_PUSH_SWAP

SRC = ./mandatory/push_swap.c ./mandatory/check_all.c ./mandatory/utils1.c ./mandatory/store_data.c ./mandatory/parsing.c ./mandatory/moves1.c \
		./mandatory/moves2.c ./mandatory/moves3.c ./mandatory/moves4.c ./mandatory/delet_utils.c  ./mandatory/algo.c ./mandatory/utils2.c ./mandatory/big_nums.c 
OBJ = $(SRC:.c=.o)

all : $(NAME)
%.o:%.c
	@$(CC) $(CFLAGS) -c $^ -o $@
$(NAME) : $(OBJ)
	@echo $(Red)" $${HEADER_PUSH_SWAP}"$(Color_Off)
	@echo  $(BPurple)"								made by : heybellakrim"$(Color_Off)
	@make -C ./mandatory/libft
	@make bonus -C ./mandatory/libft
	@$(CC) $(CFLAGS) $(OBJ)  ./mandatory/libft/libft.a -o $(NAME)
re : fclean all
clean :
	@make clean -C ./mandatory/libft
	@rm -rf $(OBJ)
fclean : clean
	@make fclean -C ./mandatory/libft
	@rm -rf $(NAME)
.PHONY : clean fclean re