# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 15:38:32 by kmatsuna          #+#    #+#              #
#    Updated: 2025/01/27 19:18:21 by kmatsuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# CC = cc
# CFLAG = -Wall -Werror -Wextra
# AR = ar
# ARFLAGS = rcs

# SRCS = $(wildcard *.c)
# OBJS = $(SRCS:.c=.o)
# NAME = libft.a

# all: $(NAME)

# $(NAME): $(OBJS)
#     $(AR) $(ARFLAGS) $@ $^

# %.o: %.c
#     $(CC) $(CFLAG) -c $< -o $@

# clean:
#     rm -f $(OBJS)

# fclean: clean
#     rm -f $(NAME)

# re: fclean all


CC = cc
CFRAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = 	ft_bzero.c \
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_memmove.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\

OBJS = $(SRCS:.c=.o)
$(NAME) :    $(OBJS)
	ar rc $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

# so :
# 	$(CC) -fPIC $(CFLAGS) $(SRCS)
# 	gcc -shared -o libft.so $(OBJS)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)