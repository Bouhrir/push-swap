# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 17:58:30 by obouhrir          #+#    #+#              #
#    Updated: 2023/04/07 21:43:02 by obouhrir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = push_swap
CC	   = cc 
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g
SRC    = push_swap.c algorithm.c sort.c utl_main.c utl1.c utl2.c utl3.c utl4.c rules.c rules1.c 
OBJ    = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
		${CC} ${CFLAGS} ${OBJ} -o ${NAME} 

clean :
		rm -f ${OBJ}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re