# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 17:58:30 by obouhrir          #+#    #+#              #
#    Updated: 2023/04/08 21:13:24 by obouhrir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = push_swap
CC	   = cc 
CFLAGS = -Wall -Werror -Wextra
SRC    = push_swap.c algorithm.c sort.c utl_main.c utl1.c utl2.c utl3.c utl4.c rules.c rules1.c free.c
OBJ    = ${SRC:.c=.o}

#Make standard colour 
RED       = "\033[0;31m"
GREEN     = "\033[0;32m"

all : ${NAME}

${NAME} : ${OBJ}
		@echo ${GREEN}
		${CC} ${CFLAGS} ${OBJ} -o ${NAME} 

clean :
		@echo ${RED}
		rm -f ${OBJ}

fclean : clean
		@echo ${RED}
		rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re