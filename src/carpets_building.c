/*
** EPITECH PROJECT, 2020
** first_carpet
** File description:
** handle first carpet buildings
*/

#include "defender.h"
#include "struct.h"

void carpets_building4(sprtext_s *sprtext, game_s *game)
{
    if (game->fourth_carpet == 1) {
        sfSprite_setPosition(sprtext->arcan_tower, (sfVector2f) {1440, 510});
        sfRenderWindow_drawSprite(game->window, sprtext->arcan_tower, NULL);
    }
    if (game->fourth_carpet == 2) {
        sfSprite_setPosition(sprtext->archer_tower, (sfVector2f) {1445, 515});
        sfRenderWindow_drawSprite(game->window, sprtext->archer_tower, NULL);
    }
    if (game->fourth_carpet == 3) {
        sfSprite_setPosition(sprtext->magma_tower, (sfVector2f) {1450, 520});
        sfRenderWindow_drawSprite(game->window, sprtext->magma_tower, NULL);
    }
    if (game->fourth_carpet == 4) {
        sfSprite_setPosition(sprtext->mortar, (sfVector2f) {1450, 550});
        sfRenderWindow_drawSprite(game->window, sprtext->mortar, NULL);
    }
}

void carpets_building3(sprtext_s *sprtext, game_s *game)
{
    if (game->third_carpet == 1) {
        sfSprite_setPosition(sprtext->arcan_tower, (sfVector2f) {1090, 855});
        sfRenderWindow_drawSprite(game->window, sprtext->arcan_tower, NULL);
    }
    if (game->third_carpet == 2) {
        sfSprite_setPosition(sprtext->archer_tower, (sfVector2f) {1100, 860});
        sfRenderWindow_drawSprite(game->window, sprtext->archer_tower, NULL);
    }
    if (game->third_carpet == 3) {
        sfSprite_setPosition(sprtext->magma_tower, (sfVector2f) {1105, 870});
        sfRenderWindow_drawSprite(game->window, sprtext->magma_tower, NULL);
    }
    if (game->third_carpet == 4) {
        sfSprite_setPosition(sprtext->mortar, (sfVector2f) {1100, 900});
        sfRenderWindow_drawSprite(game->window, sprtext->mortar, NULL);
    }
}

void carpets_building2(sprtext_s *sprtext, game_s *game)
{
    if (game->sec_carpet == 1) {
        sfSprite_setPosition(sprtext->arcan_tower, (sfVector2f) {400, 595});
        sfRenderWindow_drawSprite(game->window, sprtext->arcan_tower, NULL);
    }
    if (game->sec_carpet == 2) {
        sfSprite_setPosition(sprtext->archer_tower, (sfVector2f) {410, 605});
        sfRenderWindow_drawSprite(game->window, sprtext->archer_tower, NULL);
    }
    if (game->sec_carpet == 3) {
        sfSprite_setPosition(sprtext->magma_tower, (sfVector2f) {415, 615});
        sfRenderWindow_drawSprite(game->window, sprtext->magma_tower, NULL);
    }
    if (game->sec_carpet == 4) {
        sfSprite_setPosition(sprtext->mortar, (sfVector2f) {410, 635});
        sfRenderWindow_drawSprite(game->window, sprtext->mortar, NULL);
    }
}

void carpets_building(sprtext_s *sprtext, game_s *game)
{
    if (game->first_carpet == 1) {
        sfSprite_setPosition(sprtext->arcan_tower, (sfVector2f) {700, 340});
        sfRenderWindow_drawSprite(game->window, sprtext->arcan_tower, NULL);
    }
    if (game->first_carpet == 2) {
        sfSprite_setPosition(sprtext->archer_tower, (sfVector2f) {705, 340});
        sfRenderWindow_drawSprite(game->window, sprtext->archer_tower, NULL);
    }
    if (game->first_carpet == 3) {
        sfSprite_setPosition(sprtext->magma_tower, (sfVector2f) {710, 350});
        sfRenderWindow_drawSprite(game->window, sprtext->magma_tower, NULL);
    }
    if (game->first_carpet == 4) {
        sfSprite_setPosition(sprtext->mortar, (sfVector2f) {705, 380});
        sfRenderWindow_drawSprite(game->window, sprtext->mortar, NULL);
    }
}