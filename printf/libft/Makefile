# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 16:30:17 by huakbas           #+#    #+#              #
#    Updated: 2024/11/16 13:50:01 by huakbas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Wextra -Werror

LFTSRCFILES := ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c\
ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_itoa.c\
ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c\
ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcmp.c\
ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c

LFTBONUSFILES := ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c\
ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstmap_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c

LFTOBJECTFILES := $(LFTSRCFILES:.c=.o)

LFTBONUSOBJECTFILES := $(LFTBONUSFILES:.c=.o)

BONUSCHECK := checkbonus

NAME := libft.a

all: ${NAME} clean

bonus: ${BONUSCHECK} clean

${NAME}: ${LFTOBJECTFILES}
	@ ar rcs $@ ${LFTOBJECTFILES}

${LFTOBJECTFILES}: ${LFTSRCFILES}
	@ cc -g -c $(CFLAGS) ${LFTSRCFILES}

${BONUSCHECK}: ${NAME} ${LFTBONUSFILES}
	@ cc -g -c $(CFLAGS) ${LFTBONUSFILES}
	@ ar rs ${NAME} ${LFTBONUSOBJECTFILES}
	@ touch ${BONUSCHECK}

extract:
	@ ar x ${NAME}

clean:
	@ rm -f ${LFTOBJECTFILES} ${LFTBONUSOBJECTFILES} ${BONUSCHECK}

fclean: clean
	rm -f $(NAME)
	
re: fclean all

show:
	ar -tv ${NAME}

.PHONY: all clean fclean re show _bonus
