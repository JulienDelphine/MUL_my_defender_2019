/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** animation for orc time by clock
*/

#include "defender.h"

void anim_orc(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock_anim)) > 0.15f)
        game->rect_orc.left += 33;
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock_anim)) > 0.16f)
        sfClock_restart(game->Clock_anim);
    if (game->rect_orc.left > 240)
        game->rect_orc.left = 10;
}

void anim_mimic(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock_anim)) > 0.15f)
        game->rect_mimic.left += 33;
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock_anim)) > 0.16f)
        sfClock_restart(game->Clock_anim);
    if (game->rect_mimic.left > 240)
        game->rect_mimic.left = 10;
}