# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 21:51:04 by ibellash          #+#    #+#              #
#    Updated: 2023/03/14 17:53:39 by ibellash         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIB_FT = libft
LIB = libft.a
PRINT_F = ft_printf
PRINT = libftprintf.a 
SRCS = do_move.c error_utils.c ft_errors.c multi_func.c \
	silent_func.c p_func.c r_func.c s_func.c push_swap.c \
			search_utils.c sort_utils.c sort.c utils.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS) $(LIB_FT)/$(LIB) $(PRINT_F)/$(PRINT)
	$(CC) $(CFLAGS) $(LIB_FT)/$(LIB) $(PRINT_F)/$(PRINT) $(OBJS) -o $(NAME)

$(LIB_FT)/$(LIB):
	@make -C $(LIB_FT)

$(PRINT_F)/$(PRINT):
	@make -C $(PRINT_F)
 
all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all 

.PHONY: all clean fclean re