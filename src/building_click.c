/*
** EPITECH PROJECT, 2020
** building_click
** File description:
** determinate which building is selected
*/

#include "defender.h"
#include "struct.h"

void firstbuild_button(int mouse_x, int mouse_y, game_s *game)
{
    if (mouse_x > 10 && mouse_x < 210 && mouse_y > 10 && mouse_y < 210) {
        if (game->select == 1)
            game->select = 0;
        else
            game->select = 1;
    }
}

void secbuild_button(int mouse_x, int mouse_y, game_s *game)
{
    if (mouse_x > 10 && mouse_x < 210 && mouse_y > 270 && mouse_y < 460) {
        if (game->select == 2)
            game->select = 0;
        else
            game->select = 2;
    }
}

void thirdbuild_button(int mouse_x, int mouse_y, game_s *game)
{
    if (mouse_x > 10 && mouse_x < 210 && mouse_y > 530 && mouse_y < 710) {
        if (game->select == 3)
            game->select = 0;
        else
            game->select = 3;
    }
}

void fourbuild_button(int mouse_x, int mouse_y, game_s *game)
{
    if (mouse_x > 10 && mouse_x < 210 && mouse_y > 790 && mouse_y < 960) {
        if (game->select == 4)
            game->select = 0;
        else
            game->select = 4;
    }
}