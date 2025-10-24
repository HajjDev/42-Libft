# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 09:53:58 by cel-hajj          #+#    #+#              #
#    Updated: 2025/10/24 14:37:16 by cel-hajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c \
	./ft_isprint.c ./ft_memcpy.c ./ft_memset.c ./ft_strchr.c ./ft_strdup.c ./ft_strlen.c ./ft_strnstr.c ./ft_strrchr.c \
	./ft_substr.c ./ft_tolower.c ./ft_toupper.c ./ft_itoa.c ./ft_memchr.c ./ft_memmove.c ./ft_putchar_fd.c ./ft_putendl_fd.c \
	./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_split.c ./ft_striteri.c ./ft_strjoin.c ./ft_strlcpy.c ft_strmapi.c ./ft_strncmp.c \
	./ft_strtrim.c ./ft_memcmp.c ./ft_strlcat.c
SRCSB = ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_back.c ./ft_lstdelone.c \
		./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c
		
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)
INCLUDES = libft.h
CFLAGS = -Wall -Wextra -Werror

CC = cc
RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: clean all

bonus: $(OBJS) $(OBJSB)
	ar rcs $(NAME) $(OBJS) $(OBJSB)

.PHONY: all clean fclean re bonus