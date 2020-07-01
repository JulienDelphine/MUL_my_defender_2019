/*
** EPITECH PROJECT, 2020
** display_buttons
** File description:
** display buttons in function of which one got clicked before
*/

#include "defender.h"
#include "struct.h"

void display_buttons2(sprtext_s *sprtext, game_s *game)
{
    if (game->select == 3) {
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 10});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 260});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->clear_orange, (sfVector2f) {10, 510});
        sfRenderWindow_drawSprite(game->window, sprtext->clear_orange, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 760});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
    }
    if (game->select == 4) {
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 10});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 260});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 510});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->clear_orange, (sfVector2f) {10, 760});
        sfRenderWindow_drawSprite(game->window, sprtext->clear_orange, NULL);
    }
}

void display_buttons(sprtext_s *sprtext, game_s *game)
{
    if (game->select == 1) {
        sfSprite_setPosition(sprtext->clear_orange, (sfVector2f) {10, 10});
        sfRenderWindow_drawSprite(game->window, sprtext->clear_orange, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 260});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 510});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 760});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
    }
    if (game->select == 2) {
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 10});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->clear_orange, (sfVector2f) {10, 260});
        sfRenderWindow_drawSprite(game->window, sprtext->clear_orange, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 510});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 760});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
    }
    display_buttons2(sprtext, game);
}