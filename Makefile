##
## EPITECH PROJECT, 2020
## my defender
## File description:
## Makefile
##

SRC	=	src/main_defender.c					\
		src/analyse_events.c				\
		src/init_sprtext.c					\
		src/draw_pointer.c					\
		src/menu/play_button.c				\
		src/menu/exit_button.c				\
		src/menu/draw_title.c				\
		src/pause_menu.c					\
		src/check_coord.c					\
		src/orc.c							\
		src/building_click.c				\
		src/display_buttons.c				\
		src/anim_all.c						\
		src/mimic.c							\
		src/display_arrow.c					\
		src/display_menu.c					\
		src/carpets_building.c				\
		src/carpet_coord.c					\
		src/display_prices.c

NAME	=	my_defender

CFLAGS	=	-Wall -Wextra -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

IFLAGS	=	-I./include/

LIB		=	-L lib/my/ -l my

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -o $(NAME) $(CFLAGS) $(IFLAGS) $(SRC) $(LIB)

clean:
	make -C lib/my clean
	rm -f *.o
	rm -f *.~
	rm -f *.c~

fclean:
	make -C lib/my fclean
	rm -f $(NAME)
	rm -f *.~

re:	fclean all