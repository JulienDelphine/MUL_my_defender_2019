/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** All function for set orc
*/

#include "defender.h"

void move_diag_orc(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) < 0.01f) {
        game->pos_orc.x += 2;
        game->pos_orc.y += 2;
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) > 0.02f) {
        game->pos_orc.x += 2;
        game->pos_orc.y += 2;
        sfClock_restart(game->Clock);
    }
}

void move_y_orc(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) < 0.01f)
        game->pos_orc.y += 2;
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) > 0.02f) {
        game->pos_orc.y += 2;
        sfClock_restart(game->Clock);
    }
}

void move_x_orc(game_s *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) < 0.01f)
        game->pos_orc.x += 2;
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->Clock)) > 0.02f) {
        game->pos_orc.x += 2;
        sfClock_restart(game->Clock);
    }
}

void move_orc(game_s *game, sfSprite *enemy)
{
    if (game->pos_orc.y > 99 && game->pos_orc.y < 550)
        move_y_orc(game);
    if (game->pos_orc.y == 550 && game->pos_orc.x < 900)
        move_x_orc(game);
    if (game->pos_orc.y >= 550 && game->pos_orc.x >= 900 &&
    game->pos_orc.x < 1050)
        move_diag_orc(game);
    if (game->pos_orc.x >= 1050 && game->pos_orc.x < 1300)
        move_x_orc(game);
    if (game->pos_orc.x == 1300)
        move_y_orc(game);
    sfSprite_setPosition(enemy, game->pos_orc);
    sfRenderWindow_drawSprite(game->window, enemy, NULL);
}

void init_orc(game_s *game)
{
    orc_s orc;

    orc.orc_sp = sfSprite_create();
    orc.orc_tx = sfTexture_createFromFile("img/enemy.png", NULL);
    sfSprite_setTexture(orc.orc_sp, orc.orc_tx, sfTrue);
    sfSprite_setTextureRect(orc.orc_sp, game->rect_orc);
    sfSprite_setScale(orc.orc_sp, (sfVector2f) {2, 2});
    anim_orc(game);
    move_orc(game, orc.orc_sp);
}