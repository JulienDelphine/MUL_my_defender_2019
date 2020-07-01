/*
** EPITECH PROJECT, 2020
** display_arrow
** File description:
** display arrows to show where buildings can be build
*/

#include "defender.h"
#include "struct.h"

void display_arrow(sprtext_s *sprtext, game_s *game)
{
    sfSprite_setScale(sprtext->down, (sfVector2f) {0.5, 0.5});
    sfSprite_setPosition(sprtext->down, (sfVector2f) {690, 340});
    sfRenderWindow_drawSprite(game->window, sprtext->down, 0);
    sfSprite_setPosition(sprtext->down, (sfVector2f) {395, 600});
    sfRenderWindow_drawSprite(game->window, sprtext->down, 0);
    sfSprite_setPosition(sprtext->down, (sfVector2f) {1085, 860});
    sfRenderWindow_drawSprite(game->window, sprtext->down, 0);
    sfSprite_setPosition(sprtext->down, (sfVector2f) {1430, 515});
    sfRenderWindow_drawSprite(game->window, sprtext->down, 0);
}