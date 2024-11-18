# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 17:57:44 by huakbas           #+#    #+#              #
#    Updated: 2024/11/16 13:50:23 by huakbas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Wextra -Werror

SRCFILES := ft_printf.c ft_handle_convertion.c ft_itobase_uint.c \
ft_get_const.c ft_itobase_ul.c ft_handle_char.c ft_handle_int.c ft_handle_string.c \
ft_handle_pointer.c ft_handle_uint.c ft_set_flags.c \
ft_set_flagged_str.c ft_set_zeropadded_str.c #for bonus

#BONUSFILES := 

OBJECTFILES := $(SRCFILES:.c=.o)

#BONUSOBJECTFILES := $(BONUSFILES:.c=.o)
LIBFT = libft
LIBFTA = checklibft

NAME := libftprintf.a

LFTOBJECTFILES = libft/*.o

all: ${NAME}

bonus: ${NAME} checkbonus

${NAME} : ${OBJECTFILES} ${LIBFTA}
	@ ar rcs $@ ${OBJECTFILES} ${LFTOBJECTFILES}

checkbonus : ${NAME}
	@ touch checkbonus

${LIBFTA} :
	@ ${MAKE} -C ${LIBFT} bonus extract
	@ touch ${LIBFTA}

${OBJECTFILES} : ${SRCFILES} ${LIBFTA}
	@ cc -g -c ${CFLAGS} ${SRCFILES}
# -L ${LIBFT} -lft

#${BONUSOBJECTFILES} : ${BONUSFILES}
#	cc -c $(CFLAGS) ${BONUSFILES}

#bonus: ${NAME} ${BONUSOBJECTFILES}
#	ar rs ${NAME} ${BONUSOBJECTFILES}

clean:
	@ ${MAKE} -C ${LIBFT} clean
	@ rm -f ${OBJECTFILES} ${LIBFTA}

fclean: clean
	@ ${MAKE} -C ${LIBFT} fclean
	rm -f $(NAME) checkbonus
	
re: fclean all

show:
	ar -tv ${NAME}

.PHONY: all clean fclean re show