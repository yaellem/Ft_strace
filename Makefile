SHELL = /usr/bin/zsh
###################################################
#												  #
#				 STRACE MAKEFILE		 		  #
#												  #
###################################################

##################################################
#				Common ressources 				 #
##################################################
NAME  = ft_strace
LIBFT = ./libft/
INCS  = ./includes

##################################################
#				 Sources location				 #
##################################################
SRCS_DIR = ./srcs/
SRCS_PATH= $(addprefix $(SRCS_DIR), $(SRCS))
SRCS  = 			strace.c				\
					errors.c

##################################################
#				 Objects location				 #
##################################################
OBJS_DIR = ./.objs/
OBJS  = $(SRCS:%.c=%.o)
OBJS_PATH= $(addprefix $(OBJS_DIR), $(OBJS))

##################################################
#				Compiling flags					 #
##################################################
CC 		= clang
CFLAGS 	= -I$(INCS) -g3 #-Wall -Wextra -Werror
LDFLAGS = -L$(LIBFT) -lft

##################################################
#				Compiling rules					 #
##################################################
all:
	@echo -e '\n\t\033[1;36mCompiling Libft\033[0m'
	@make -C $(LIBFT)
	@echo -e '\n\t\033[1;36mCompiling $(NAME)\033[0m'
	@make $(NAME) 

# For ./.objs/*.o: ./srcs/*.c, clang -... -c ./srcs/X.c -o ./.objs/X.o
$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(dir $(OBJS_DIR))
	@echo -e '\033[0;36m$@\033[0m $^'
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS_PATH) $(SRCS_PATH) $(INCS)
	@clang $(LDFLAGS) $(OBJS_PATH) -o $(NAME)
	@echo -e '\033[32m[✓] Created $(NAME)\033[0m'

##################################################
#				Cleaning rules					 #
##################################################
clean:
	@make -C $(LIBFT) clean
	@rm -rf $(OBJS_PATH)
	@echo -e '\033[31mCleaned $(NAME) objects\033[0m'  

fclean:
	@make -C $(LIBFT) fclean
	@rm -rf $(OBJS_DIR)
	@echo -e '\033[1;31mCleaned $(NAME) objects\033[0m'  
	@rm -rf $(NAME)
	@echo -e '\033[1;31mCleaned $(NAME) executable\033[0m'  

re: fclean all
	
