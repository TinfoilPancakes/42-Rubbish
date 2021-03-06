# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/23 12:56:18 by ppatil            #+#    #+#              #
#    Updated: 2016/11/11 11:04:40 by ppatil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libprintf.a

CC		:= cc
C_FLAGS	:= -Wall -Wextra -Werror

SRC_DIR := ./src
INC_DIR	:= ./inc
OBJ_DIR	:= ./obj

# Including source files.
# Variable should be named C_FILES

-include sources.mk

SOURCES		:= $(addprefix $(SRC_DIR)/, $(C_FILES))
INCLUDES	:= $(addprefix -I , $(INC_DIR))
OBJECTS		:= $(addprefix $(OBJ_DIR)/, $(patsubst %.c, %.o, $(C_FILES)))

all : $(NAME)

test : $(NAME)
	$(CC) $(C_FLAGS) beta/main.c -L . -lprintf $(INCLUDES) -o thing.out

# Implicit rule for object files
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDES)

$(NAME) : $(OBJECTS)
	@echo "Archiving $(@)..."
	@ar -rc $@ $(OBJECTS)
	@echo "Done.\nIndexing $(@)..."
	@ranlib $@
	@echo "Done."

fclean : clean
	@echo "Cleaning $(NAME)..."
	@rm -rf $(NAME)
	@echo "Done."

clean :
	@echo "Cleaning $(OBJ_DIR)..."
	@rm -rf $(OBJ_DIR)
	@echo "Done."

re : fclean all

.PHONY : re fclean clean
