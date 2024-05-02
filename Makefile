# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 15:38:32 by kmatsuna          #+#    #+#              #
#    Updated: 2024/05/02 20:43:32 by kmatsuna         ###   ########.fr        #
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

#.PHONY : all clean fclean re