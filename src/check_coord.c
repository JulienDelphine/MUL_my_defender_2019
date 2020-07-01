/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** all if of check coord of pointer mouse
*/

#include "defender.h"

void check_coord_evt(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext)
{
    if (mouse_x > 800 && mouse_x < 1032 && mouse_y > 600 &&
        mouse_y < 672 && game->menu == 1)
        sfRenderWindow_close(game->window);
    if (mouse_x > 800 && mouse_x < 1032 && mouse_y > 400 &&
        mouse_y < 472 && game->menu == 1)
        game->menu = 0;
    if (game->coins > 0) {
        first_carpet_coord(mouse_x, mouse_y, game, sprtext);
        sec_carpet_coord(mouse_x, mouse_y, game, sprtext);
        third_carpet_coord(mouse_x, mouse_y, game, sprtext);
        fourth_carpet_coord(mouse_x, mouse_y, game, sprtext);
    }
    firstbuild_button(mouse_x, mouse_y, game);
    secbuild_button(mouse_x, mouse_y, game);
    thirdbuild_button(mouse_x, mouse_y, game);
    fourbuild_button(mouse_x, mouse_y, game);
    if (game->first_carpet != 0 && game->select == 0 ||
    game->sec_carpet != 0 && game->select == 0
    || game->third_carpet != 0 && game->select == 0 ||
    game->fourth_carpet != 0 && game->select == 0)
        game->coins -= 250;
}

int check_coord_evt_pause(game_s *game, int mouse_x, int mouse_y,
sprtext_s *sprtext)
{
    if (mouse_x > 795 && mouse_x < 1072 && mouse_y > 300
        && mouse_y < 467)
        return (1);
    if (mouse_x > 795 && mouse_x < 1072 && mouse_y > 550
        && mouse_y < 717) {
        game->menu = 1;
        return (1);
    }
    if (mouse_x > 795 && mouse_x < 1072 && mouse_y > 800
        && mouse_y < 967) {
        sfRenderWindow_close(game->window);
        return (1);
    }
    return (0);
}