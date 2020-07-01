/*
** EPITECH PROJECT, 2020
** init_sprtext
** File description:
** initialize all variables of sprtext structure
*/

#include "defender.h"

void init_sprtext3(sprtext_s *sprtext)
{
    sfSprite_setTexture(sprtext->clear_orange, sprtext->clear_orange_tex, 0);
    sfSprite_setScale(sprtext->clear_orange, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(sprtext->clear_orange, (sfVector2f) {10, 10});
    sprtext->arcan_tower = sfSprite_create();
    sprtext->arcan_tower_tex = sfTexture_createFromFile("img/arcan_tower.png",
    NULL);
    sfSprite_setTexture(sprtext->arcan_tower, sprtext->arcan_tower_tex, 0);
    sprtext->down = sfSprite_create();
    sprtext->down_tex = sfTexture_createFromFile("img/down.png", NULL);
    sfSprite_setTexture(sprtext->down, sprtext->down_tex, 0);
    sprtext->archer_tower = sfSprite_create();
    sprtext->archer_tex = sfTexture_createFromFile("img/archer_tower.png",
    NULL);
    sfSprite_setTexture(sprtext->archer_tower, sprtext->archer_tex, 0);
    sprtext->magma_tower = sfSprite_create();
    sprtext->magma_tex = sfTexture_createFromFile("img/magma_tower.png", NULL);
    sfSprite_setTexture(sprtext->magma_tower, sprtext->magma_tex, 0);
    sprtext->mortar = sfSprite_create();
    sprtext->mortar_tex = sfTexture_createFromFile("img/mortar.png", NULL);
    sfSprite_setTexture(sprtext->mortar, sprtext->mortar_tex, 0);
}

void init_sprtext2(sprtext_s *sprtext)
{
    sprtext->title = sfSprite_create();
    sprtext->title_tex = sfTexture_createFromFile("img/title.png", NULL);
    sfSprite_setTexture(sprtext->title, sprtext->title_tex, 0);
    sprtext->background_spr = sfSprite_create();
    sprtext->background_tex = sfTexture_createFromFile("img/background.png",
    NULL);
    sfSprite_setTexture(sprtext->background_spr, sprtext->background_tex, 0);
    sprtext->white_rect = sfSprite_create();
    sprtext->white_rect_tex = sfTexture_createFromFile("img/white_rect.png"
    , NULL);
    sfSprite_setTexture(sprtext->white_rect, sprtext->white_rect_tex, 0);
    sprtext->orange_square = sfSprite_create();
    sprtext->orange_square_tex = sfTexture_createFromFile
    ("img/orange_square.png", NULL);
    sfSprite_setTexture(sprtext->orange_square, sprtext->orange_square_tex, 0);
    sfSprite_setScale(sprtext->orange_square, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(sprtext->orange_square, (sfVector2f) {10, 10});
    sprtext->clear_orange = sfSprite_create();
    sprtext->clear_orange_tex = sfTexture_createFromFile
    ("img/clear_orange_square.png", NULL);
    init_sprtext3(sprtext);
}

void init_sprtext(sprtext_s *sprtext)
{
    sprtext->pointer = sfSprite_create();
    sprtext->pointer_tex = sfTexture_createFromFile("img/pointer.png", NULL);
    sprtext->bg_sprite = sfSprite_create();
    sprtext->bg_tex = sfTexture_createFromFile("img/bg.png", NULL);
    sfSprite_setTexture(sprtext->bg_sprite, sprtext->bg_tex, 0);
    sprtext->play_button = sfSprite_create();
    sprtext->play_button_tex = sfTexture_createFromFile("img/play.png", NULL);
    sfSprite_setTexture(sprtext->play_button, sprtext->play_button_tex, 0);
    sprtext->play_hover = sfSprite_create();
    sprtext->play_hover_tex = sfTexture_createFromFile("img/play_hover.png",
    NULL);
    sfSprite_setTexture(sprtext->play_hover, sprtext->play_hover_tex, 0);
    sprtext->exit_button = sfSprite_create();
    sprtext->exit_button_tex = sfTexture_createFromFile("img/exit_button.png",
    NULL);
    sfSprite_setTexture(sprtext->exit_button, sprtext->exit_button_tex, 0);
    sprtext->exit_hover = sfSprite_create();
    sprtext->exit_hover_tex = sfTexture_createFromFile("img/exit_hover.png",
    NULL);
    sfSprite_setTexture(sprtext->exit_hover, sprtext->exit_hover_tex, 0);
    init_sprtext2(sprtext);
}
