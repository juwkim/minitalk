# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 08:36:51 by juwkim            #+#    #+#              #
#    Updated: 2023/03/01 21:52:25 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------------------------------------------------------------------- #
#   Define the compiler and flags                                              #
# ---------------------------------------------------------------------------- #

CC                  :=	cc
CFLAGS              :=	-Wall -Wextra -Werror -march=native -O2 -pipe
CPPFLAGS            =	-I include -I $(LIBFT)/include
LDFLAGS             =	-L $(LIBFT)
LDLIBS              :=	-l ft

ifdef DEBUG
	CFLAGS	+= -g -fsanitize=address,leak,undefined
endif

# ---------------------------------------------------------------------------- #
#   Define the libraries                                                       #
# ---------------------------------------------------------------------------- #

LIBFT               := libft

# ---------------------------------------------------------------------------- #
#   Define the directories                                                     #
# ---------------------------------------------------------------------------- #

SRC_DIR             :=	source
OBJ_DIR             :=	object

# ---------------------------------------------------------------------------- #
#   Define the source files                                                    #
# ---------------------------------------------------------------------------- #

SRC_SERVER          :=	$(SRC_DIR)/server.c
SRC_CLIENT          :=	$(SRC_DIR)/client.c

OBJ_SERVER          :=	$(OBJ_DIR)/server.o
OBJ_CLIENT          :=	$(OBJ_DIR)/client.o

# ---------------------------------------------------------------------------- #
#   Define the variables for progress bar                                      #
# ---------------------------------------------------------------------------- #

TOTAL_FILES         :=	$(shell echo $(SRC_SERVER) $(SRC_CLIENT) | wc -w)
COMPILED_FILES      :=	0
STEP                :=	100

# ---------------------------------------------------------------------------- #
#   Define the name                                                            #
# ---------------------------------------------------------------------------- #

SERVER              :=	server
CLIENT              :=	client

# ---------------------------------------------------------------------------- #
#   Define the rules                                                           #
# ---------------------------------------------------------------------------- #

all:
	@$(MAKE) -C $(LIBFT)
	@$(MAKE) -j $(SERVER)
	@$(MAKE) -j $(CLIENT)

$(SERVER): $(OBJ_SERVER)
	@$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LDLIBS)
	@printf "\n$(MAGENTA)[MINITALK] SERVER Make Success\n$(DEF_COLOR)"

$(CLIENT): $(OBJ_CLIENT)
	@$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LDLIBS)
	@printf "\n$(MAGENTA)[MINITALK] CLIENT Make Success\n$(DEF_COLOR)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | dir_guard
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	$(eval COMPILED_FILES = $(shell expr $(COMPILED_FILES) + 1))
	$(eval PROGRESS = $(shell expr $(COMPILED_FILES) "*" $(STEP) / $(TOTAL_FILES)))
	@printf "                                                                                                   \r"
	@printf "$(YELLOW)[MINITALK] [%02d/%02d] ( %3d %%) Compiling $<\r$(DEF_COLOR)" $(COMPILED_FILES) $(TOTAL_FILES) $(PROGRESS)

clean:
	@$(RM) -r $(OBJ_DIR)
	@printf "$(BLUE)[MINITALK] obj. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

fclean: clean
	@$(RM) $(SERVER) $(CLIENT)
	@printf "$(CYAN)[MINITALK] exe. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

re: fclean
	@$(MAKE) all
	@printf "$(GREEN)Cleaned and Rebuilt everything for minitalk!\n$(DEF_COLOR)"

dir_guard:
	@mkdir -p $(OBJ_DIR)

norm:
	@$(MAKE) -C $(LIBFT) norm
	@(norminette include source | grep Error) || (printf "$(GREEN)[MINITALK] Norminette Success\n$(DEF_COLOR)")

debug:
	@$(MAKE) fclean
	@$(MAKE) DEBUG=1 all
	
.PHONY:	all clean fclean re dir_guard norm debug

# ---------------------------------------------------------------------------- #
#   Define the colors                                                          #
# ---------------------------------------------------------------------------- #

DEF_COLOR           =	\033[1;39m
GRAY                =	\033[1;90m
RED                 =	\033[1;91m
GREEN               =	\033[1;92m
YELLOW              =	\033[1;93m
BLUE                =	\033[1;94m
MAGENTA             =	\033[1;95m
CYAN                =	\033[1;96m
WHITE               =	\033[1;97m