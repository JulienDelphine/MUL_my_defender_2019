/*
** EPITECH PROJECT, 2020
** carpet_coord
** File description:
** detect when mouse button pressed on which carpet
*/

#include "defender.h"
#include "struct.h"

void first_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext)
{
    if (mouse_x > 690 && mouse_x < 785 && mouse_y > 300 &&
        mouse_y < 475 && game->menu == 0 && game->select == 1) {
        game->first_carpet = 1;
        game->select = 0;
    }
    if (mouse_x > 690 && mouse_x < 785 && mouse_y > 300 &&
        mouse_y < 475 && game->menu == 0 && game->select == 2) {
        game->first_carpet = 2;
        game->select = 0;
    }
    if (mouse_x > 690 && mouse_x < 785 && mouse_y > 300 &&
        mouse_y < 475 && game->menu == 0 && game->select == 3) {
        game->first_carpet = 3;
        game->select = 0;
    }
    if (mouse_x > 690 && mouse_x < 785 && mouse_y > 300 &&
        mouse_y < 475 && game->menu == 0 && game->select == 4) {
        game->first_carpet = 4;
        game->select = 0;
    }
}

void sec_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext)
{
    if (mouse_x > 400 && mouse_x < 500 && mouse_y > 600 &&
        mouse_y < 700 && game->menu == 0 && game->select == 1) {
        game->sec_carpet = 1;
        game->select = 0;
    }
    if (mouse_x > 400 && mouse_x < 500 && mouse_y > 600 &&
        mouse_y < 800 && game->menu == 0 && game->select == 2) {
        game->sec_carpet = 2;
        game->select = 0;
    }
    if (mouse_x > 400 && mouse_x < 500 && mouse_y > 600 &&
        mouse_y < 800 && game->menu == 0 && game->select == 3) {
        game->sec_carpet = 3;
        game->select = 0;
    }
    if (mouse_x > 400 && mouse_x < 500 && mouse_y > 600 &&
        mouse_y < 800 && game->menu == 0 && game->select == 4) {
        game->sec_carpet = 4;
        game->select = 0;
    }
}

void third_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext)
{
    if (mouse_x > 1085 && mouse_x < 1285 && mouse_y > 860 &&
        mouse_y < 1060 && game->menu == 0 && game->select == 1) {
        game->third_carpet = 1;
        game->select = 0;
    }
    if (mouse_x > 1085 && mouse_x < 1285 && mouse_y > 860 &&
        mouse_y < 1060 && game->menu == 0 && game->select == 2) {
        game->third_carpet = 2;
        game->select = 0;
    }
    if (mouse_x > 1085 && mouse_x < 1285 && mouse_y > 860 &&
        mouse_y < 1060 && game->menu == 0 && game->select == 3) {
        game->third_carpet = 3;
        game->select = 0;
    }
    if (mouse_x > 1085 && mouse_x < 1285 && mouse_y > 860 &&
        mouse_y < 1060 && game->menu == 0 && game->select == 4) {
        game->third_carpet = 4;
        game->select = 0;
    }
}

void fourth_carpet_coord(int mouse_x, int mouse_y, game_s *game,
sprtext_s *sprtext)
{
    if (mouse_x > 1430 && mouse_x < 1630 && mouse_y > 515 &&
        mouse_y < 715 && game->menu == 0 && game->select == 1) {
        game->fourth_carpet = 1;
        game->select = 0;
    }
    if (mouse_x > 1430 && mouse_x < 1630 && mouse_y > 515 &&
        mouse_y < 715 && game->menu == 0 && game->select == 2) {
        game->fourth_carpet = 2;
        game->select = 0;
    }
    if (mouse_x > 1430 && mouse_x < 1630 && mouse_y > 515 &&
        mouse_y < 715 && game->menu == 0 && game->select == 3) {
        game->fourth_carpet = 3;
        game->select = 0;
    }
    if (mouse_x > 1430 && mouse_x < 1630 && mouse_y > 515 &&
        mouse_y < 715 && game->menu == 0 && game->select == 4) {
        game->fourth_carpet = 4;
        game->select = 0;
    }
}