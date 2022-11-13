# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yitoh <yitoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 14:35:44 by yitoh         #+#    #+#                  #
#    Updated: 2022/11/13 13:41:05 by yitoh         ########   odam.nl          #
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
BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
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
