# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yitoh <yitoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 14:35:44 by yitoh         #+#    #+#                  #
#    Updated: 2022/11/07 20:18:59 by yitoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

BUILDDIR = objdir
CC = cc
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c \
	  ft_tolower.c ft_toupper.c ft_memcpy.c ft_memchr.c ft_strlcpy.c ft_strlcat.c \
	  ft_strncmp.c ft_strchr.c ft_strnstr.c ft_strrchr.c ft_memset.c ft_bzero.c \
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_atoi.c ft_strlcat.c ft_calloc.c \
	  ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_striteri.c\
	  ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	  ft_split.c 
REGOBJ = $(SRC:.c=.o)
BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c
BONUSOBJ = $(BONUSSRC:.c=.o)
CFLAG = -Wall -Wextra -Werror #-fsanitize=address -g
NAME = libft.a

ifdef WITH_BONUS
OBJ = $(REGOBJ) $(BONUSOBJ)
else
OBJ = $(REGOBJ)
endif

all: $(NAME)

$(NAME): $(OBJ)
	@ar -crs $@ $^

%.o: %.c
	@$(CC) -c $(CFLAG) $< -o $@

#$(BUILDDIR):
#	@mkdir $(BUILDDIR)

clean:
	@rm -rf $(REGOBJ) $(BONUSOBJ)

fclean: clean
	@rm -f $(NAME) a.out

re: fclean all

bonus: 
	@$(MAKE) WITH_BONUS=1 all
	@ar -crs $(NAME) $(BONUSOBJ)

.PHONY: clean fclean all bonus test

test: $(NAME)
	@$(CC) $(CFLAG) *.c -o ./a.out
