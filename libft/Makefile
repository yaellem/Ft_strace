# **************************************************************************** #
##
#::::::::::: #
# Makefile :+::+: :+: #
#  +:+ +:++:+#
# By: ymarcill <marvin@42.fr>  +#+  +:+ +#+#
# +#+#+#+#+#++#+#
# Created: 2017/11/12 22:42:58 by ymarcill #+# #+#  #
# Updated: 2017/11/30 04:14:33 by ymarcill###########.fr  #
##
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I$(INCS)

INCS = ./inc/

SRCS = $(addprefix ./srcs/, $(SRC))
SRC = ft_memset.c  		ft_bzero.c  	ft_memcpy.c  		\
	  ft_memccpy.c 		ft_memmove.c	ft_memchr.c  		\
	  ft_memcmp.c  		ft_strlen.c 	ft_strdup.c  		\
	  ft_strcpy.c  		ft_strncpy.c	ft_strcat.c  		\
	  ft_strncat.c 		ft_strlcat.c	ft_strchr.c  		\
	  ft_strrchr.c 		ft_strstr.c 	ft_strcmp.c  		\
	  ft_strnstr.c 		ft_strncmp.c	ft_atoi.c 			\
	  ft_isalpha.c 		ft_isdigit.c	ft_isalnum.c 		\
	  ft_isascii.c 		ft_isprint.c	ft_toupper.c 		\
	  ft_tolower.c 		ft_memalloc.c  	ft_memdel.c  		\
	  ft_strnew.c  		ft_strdel.c 	ft_strclr.c  		\
	  ft_striter.c 		ft_striteri.c  	ft_strmap.c  		\
	  ft_putchar.c 		ft_putstr.c 	ft_strmapi.c 		\
	  ft_strequ.c  		ft_strnequ.c	ft_strsub.c  		\
	  ft_strsplit.c		ft_strjoin.c	ft_strtrim.c 		\
	  ft_putendl.c 		ft_putnbr.c 	ft_putchar_fd.c 	\
	  ft_putstr_fd.c  	ft_putnbr_fd.c 	ft_itoa.c 			\
	  ft_putendl_fd.c 	ft_lstnew.c 	ft_lstdelone.c  		\
	  ft_lstdel.c  		ft_lstadd.c 	ft_lstiter.c 			\
	  ft_lstmap.c  		ft_swap.c		ft_iswhitespace.c  	\
	  ft_sqrt.c		  	ft_list_size.c 	ft_sort_int.c		\
	  ft_noccurr.c											\

OBJ_DIR = ./.obj/
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))
OBJ = $(SRC:.c=.o)
	
all:
	@echo "\033[0;32m\033[0m\033[0;33m[libft]\033[0m" 
	@make $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS) $(INCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo -e '\n\033[32m[✓] Created $(NAME)\033[0m' 

$(OBJ_DIR)%.o: ./srcs/%.c 
	@echo -en '\033[0;36m$@\033[0m $<          \r'
	@gcc $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJS)
	@rm -rf $(dir $(OBJS))
	@echo -e '\033[31mCleaned $(NAME) objects\033[0m'  

fclean: clean
	@rm -f $(NAME)
	@echo -e '\033[31mCleaned $(NAME) executable\033[0m'  

re: fclean all

