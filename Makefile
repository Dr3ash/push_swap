# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alenzini <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 19:11:08 by alenzini          #+#    #+#              #
#    Updated: 2023/01/18 01:11:42 by alenzini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC	= gcc
CFLAGS	= -Wall -Werror -Wextra
INC		= -I inc/
NAME	= push_swap

SRC_PATH = src/
OBJ_PATH = obj/
INC_PATH = inc/

SRC		=	main.c \
			do_operations.c \
			do_operations2.c \
			do_operations3.c \
			sort_little_stack.c \
			best_pos_b.c \
			prepare_to_pa.c \
			rotations.c \
			sort_utils.c \
			sort_utils2.c \
			sort.c \
			initialize.c \
			input_check.c \
			input_errors.c \
			input.c \
			operations.c \
			operations2.c \
			stack_handling_errors.c \
			utils.c

SRCS	= $(addprefix $(SRC_PATH), $(SRC))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) -c $(CFLAGS)  $< -o $@ $(INC)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
