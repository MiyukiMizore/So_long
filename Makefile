# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 11:39:21 by mfusil            #+#    #+#              #
#    Updated: 2022/06/20 19:27:01 by mfusil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

LIBFT = Libft/libft.a

SO_LONG= so_long.c

CHECK_ERROR = check_map/check_map.c\
			  check_map/check_map2.c\
			  check_map/check_map3.c\
			  check_map/check_map4.c\
			  check_map/check_map5.c\
			  check_map/check_map6.c\
			  check_map/check_map7.c

DIM = Map/dimension.c\
	  Map/print_map.c\
	  Map/read_collectable.c

MAP = Mapping/read_map.c\
	  Mapping/wall.c\
	  Mapping/ground.c\
	  Mapping/player.c\
	  Mapping/collectable.c\
	  Mapping/door.c\
	  Mapping/door_open.c\
	  Mapping/ennemy_1.c\
	  Mapping/ennemy_2.c

MOVE = Move/move.c\
	   Move/up.c\
	   Move/down.c\
	   Move/left.c\
	   Move/right.c

ALL_SRC = $(SO_LONG)\
		  $(CHECK_ERROR)\
		  $(DIM)\
		  $(MAP)\
		  $(MOVE)

OBJS = $(ALL_SRC:.c=.o)

RE_LIBFT = make  -C  Libft

all : $(NAME)
	@./So_long Map/map1.ber

$(NAME) : $(OBJS)
		$(RE_LIBFT)
		@cc -o $(NAME) -I /usr/local/include $(OBJS) $(LIBFT) -L /usr/local/lib -lmlx -framework OpenGL -framework Appkit -fsanitize=address
clean :
		rm -rf a.out
		rm -rf $(LIBFT)
		rm -rf $(OBJS)
		rm -rf $(NAME)
		clear

fclean : clean

re : clean all
