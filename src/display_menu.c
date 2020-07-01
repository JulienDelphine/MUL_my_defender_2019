/*
** EPITECH PROJECT, 2020
** display_menu
** File description:
** display buildings menu on the left
*/

#include "defender.h"
#include "struct.h"

void display_buildings(sprtext_s *sprtext, game_s *game)
{
    sfSprite_setPosition(sprtext->arcan_tower, (sfVector2f) {80, 50});
    sfRenderWindow_drawSprite(game->window, sprtext->arcan_tower, NULL);
    sfSprite_setPosition(sprtext->archer_tower, (sfVector2f) {85, 300});
    sfRenderWindow_drawSprite(game->window, sprtext->archer_tower, NULL);
    sfSprite_setPosition(sprtext->magma_tower, (sfVector2f) {85, 560});
    sfRenderWindow_drawSprite(game->window, sprtext->magma_tower, NULL);
    sfSprite_setPosition(sprtext->mortar, (sfVector2f) {85, 820});
    sfRenderWindow_drawSprite(game->window, sprtext->mortar, NULL);
    carpets_building(sprtext, game);
    carpets_building2(sprtext, game);
    carpets_building3(sprtext, game);
    carpets_building4(sprtext, game);
}

void display_menu(sprtext_s *sprtext, game_s *game)
{
    if (game->select == 0) {
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 10});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 260});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 510});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 760});
        sfRenderWindow_drawSprite(game->window, sprtext->orange_square, NULL);
        display_buildings(sprtext, game);
        display_prices(game);
    }
    else {
        display_buttons(sprtext, game);
        display_prices(game);
        display_buildings(sprtext, game);
        display_arrow(sprtext, game);
    }
}