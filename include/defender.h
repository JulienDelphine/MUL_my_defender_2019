/*
** EPITECH PROJECT, 2020
** my defender
** File description:
** include for defender
*/

#include "struct.h"
#include "../lib/my/include/lib.h"

#ifndef DEFENDER_
#define DEFENDER_

void init_sprtext(sprtext_s *sprtext);
void analyse_events(game_s *game, sprtext_s *sprtext, pause_s *pause);
void play_button(sfRenderWindow *window, sprtext_s *sprtext);
void draw_pointer(sfRenderWindow *window, sprtext_s *sprtext);
void draw_title(sfRenderWindow *window, sprtext_s *sprtext);
int pause_menu(sprtext_s *sprtext, game_s *game, pause_s *pause);
int main(void);
int check_coord_evt_pause(game_s *game, int mouse_x, int mouse_y,
sprtext_s *sprtext);
void check_coord_evt(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext);
void exit_button(sfRenderWindow *window, sprtext_s *sprtext);
void init_orc(game_s *game);
void firstbuild_button(int mouse_x, int mouse_y, game_s *game);
void secbuild_button(int mouse_x, int mouse_y, game_s *game);
void thirdbuild_button(int mouse_x, int mouse_y, game_s *game);
void fourbuild_button(int mouse_x, int mouse_y, game_s *game);
void display_buttons(sprtext_s *sprtext, game_s *game);
void anim_orc(game_s *game);
void anim_mimic(game_s *game);
void init_mimic(game_s *game);
void display_arrow(sprtext_s *sprtext, game_s *game);
void display_menu(sprtext_s *sprtext, game_s *game);
void carpets_building(sprtext_s *sprtext, game_s *game);
void third_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext);
void sec_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext);
void first_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext);
void fourth_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext);
void carpets_building2(sprtext_s *sprtext, game_s *game);
void carpets_building3(sprtext_s *sprtext, game_s *game);
void carpets_building4(sprtext_s *sprtext, game_s *game);

#endif /* DEFENDER_ */