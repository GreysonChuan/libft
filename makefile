# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchuan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 21:46:14 by gchuan            #+#    #+#              #
#    Updated: 2023/07/06 21:52:07 by gchuan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS = $(wildcard $(addsuffix *.c, srcs/))
INCS = includes
LIBC = ar rcs
OBJS = ${SRCS:.c=.o}
RM   = rm -f

.c.0:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCS)

${NAME}: $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
all: $(NAME)

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.phony: all, clean, fclean, re
