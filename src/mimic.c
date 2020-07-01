/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** All function for set mimic
*/

#include "defender.h"

void move_diag_mimic(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) < 0.01f) {
        game->pos_mimic.x += 3;
        game->pos_mimic.y += 3;
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) > 0.02f) {
        game->pos_mimic.x += 3;
        game->pos_mimic.y += 3;
        sfClock_restart(game->Clock);
    }
}

void move_y_mimic(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) < 0.01f)
        game->pos_mimic.y += 3;
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) > 0.02f) {
        game->pos_mimic.y += 3;
        sfClock_restart(game->Clock);
    }
}

void move_x_mimic(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) < 0.01f)
        game->pos_mimic.x += 3;
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) > 0.02f) {
        game->pos_mimic.x += 3;
        sfClock_restart(game->Clock);
    }
}

void move_mimic(game_s *game, sfSprite *enemy)
{
    if (game->pos_mimic.y > 99 && game->pos_mimic.y < 550)
        move_y_mimic(game);
    if (game->pos_mimic.y == 550 && game->pos_mimic.x < 900)
        move_x_mimic(game);
    if (game->pos_mimic.y >= 550 && game->pos_mimic.x >= 900
        && game->pos_mimic.x < 1050)
        move_diag_mimic(game);
    if (game->pos_mimic.x >= 1050 && game->pos_mimic.x < 1300)
        move_x_mimic(game);
    if (game->pos_mimic.x == 1300)
        move_y_mimic(game);
    sfSprite_setPosition(enemy, game->pos_mimic);
    sfRenderWindow_drawSprite(game->window, enemy, NULL);
}

void init_mimic(game_s *game)
{
    mimic_s mimic;

    mimic.mimic_sp = sfSprite_create();
    mimic.mimic_tx = sfTexture_createFromFile("img/enemy.png", NULL);
    sfSprite_setTexture(mimic.mimic_sp, mimic.mimic_tx, sfTrue);
    sfSprite_setTextureRect(mimic.mimic_sp, game->rect_mimic);
    sfSprite_setScale(mimic.mimic_sp, (sfVector2f) {2, 2});
    anim_mimic(game);
    move_mimic(game, mimic.mimic_sp);
}