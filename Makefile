# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 15:24:31 by huakbas           #+#    #+#              #
#    Updated: 2024/11/21 10:20:35 by huakbas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -w
PRINTF := printf

TARGET := test

SRC := $(wildcard test*/*.c)

all:
	@ $(MAKE) -C ${PRINTF} all clean
	@ cc -g ${CFLAGS} ${SRC} test.c -L ${PRINTF} -lftprintf -o ${TARGET}
	./${TARGET}

clean:
	@ $(MAKE) -C ${PRINTF} clean
	@ rm -f test

fclean:
	@ $(MAKE) -C ${PRINTF} fclean
	rm -f test

show:
	$(MAKE) -C ${PRINTF} show

val:
	@ ${MAKE} -C ${PRINTF} all clean
	@ cc -g ${CFLAGS} ${SRC} test.c -L ${PRINTF} -lftprintf -o ${TARGET}
	valgrind -s --leak-check=yes --show-leak-kinds=all --track-origins=yes ./test

run:
	./${TARGET}