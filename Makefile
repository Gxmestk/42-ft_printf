# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 23:14:19 by tkhemniw          #+#    #+#              #
#    Updated: 2022/09/03 23:27:47 by tkhemniw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

INCS_DIR	= ./includes
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRC_DIR		= ./srcs
SRCS		= $(SRC_DIR)/ft_printf.c

OBJS 		= $(SRCS:.c=.o)

RM			= /bin/rm -f

all:		$(NAME)

$(NAME): $(OBJS) $(LIBFT)
			ar -rc $(NAME) $(OBJS)

.c.o: 		
			gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(LIBFT):
			make -C $(LIBFT_DIR)
			cp $(LIBFT) $(NAME)

bonus:		all

clean:
			make clean -C $(LIBFT_DIR)
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C $(LIBFT_DIR)
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re