# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 14:50:05 by abellakr          #+#    #+#              #
#    Updated: 2022/04/06 14:26:16 by abellakr         ###   ########.fr        #
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
NAME_BONUS = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror

define HEADER_PUSH_SWAP 
		-----------------------------------------------------------------------	
		██████╗░██╗░░░██╗░██████╗██╗░░██╗░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░
		██╔══██╗██║░░░██║██╔════╝██║░░██║██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗
		██████╔╝██║░░░██║╚█████╗░███████║╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝
		██╔═══╝░██║░░░██║░╚═══██╗██╔══██║░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░
		██║░░░░░╚██████╔╝██████╔╝██║░░██║██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░
		╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░
		-----------------------------------------------------------------------
endef

export HEADER_PUSH_SWAP

define CHECKER_PUSH_SWAP 
		--------------------------------------------------------
		░█████╗░██╗░░██╗███████╗░█████╗░██╗░░██╗███████╗██████╗░
		██╔══██╗██║░░██║██╔════╝██╔══██╗██║░██╔╝██╔════╝██╔══██╗
		██║░░╚═╝███████║█████╗░░██║░░╚═╝█████═╝░█████╗░░██████╔╝
		██║░░██╗██╔══██║██╔══╝░░██║░░██╗██╔═██╗░██╔══╝░░██╔══██╗
		╚█████╔╝██║░░██║███████╗╚█████╔╝██║░╚██╗███████╗██║░░██║
		░╚════╝░╚═╝░░╚═╝╚══════╝░╚════╝░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝
		--------------------------------------------------------
endef

export CHECKER_PUSH_SWAP
SRC = ./mandatory/push_swap.c ./mandatory/check_all.c ./mandatory/utils1.c ./mandatory/store_data.c ./mandatory/parsing.c ./mandatory/moves1.c \
		./mandatory/moves2.c ./mandatory/moves3.c ./mandatory/moves4.c  ./mandatory/algo.c ./mandatory/utils2.c ./mandatory/big_nums.c 
OBJ = $(SRC:.c=.o)
B_SRC = ./bonus/checker.c ./bonus/check_all_bonus.c ./bonus/moves1_bonus.c ./bonus/moves2_bonus.c ./bonus/moves3_bonus.c ./bonus/moves4_bonus.c ./bonus/parsing_bonus.c ./bonus/store_data_bonus.c ./bonus/utils1_bonus.c
B_OBJ = $(B_SRC:.c=.o)

all : $(NAME)
%.o:%.c
	@$(CC) $(CFLAGS) -c $^ -o $@
$(NAME) : $(OBJ)
	@echo $(Red)" $${HEADER_PUSH_SWAP}"$(Color_Off)
	@echo  $(BPurple)"								made by : heybellakrim"$(Color_Off)
	@make -C ./libft
	@make bonus -C ./libft
	@$(CC) $(CFLAGS) $(OBJ)  ./libft/libft.a -o $(NAME)
bonus : $(B_OBJ)
	@echo $(Green)" $${CHECKER_PUSH_SWAP}"$(Color_Off)
	@echo  $(BPurple)"						made by : heybellakrim"$(Color_Off)
	@make -C ./libft
	@make bonus -C ./libft
	@$(CC) $(CFLAGS) $(B_OBJ)  ./libft/libft.a -o $(NAME_BONUS)
re : fclean all
clean :
	@make clean -C ./libft
	@rm -f $(OBJ)
	@rm -f $(B_OBJ)
fclean : clean
	@make fclean -C ./libft
	@rm -f $(NAME)
	@rm -f $(NAME_BONUS)
.PHONY : clean fclean bonus