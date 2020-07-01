/*
** EPITECH PROJECT, 2020
** draw_title
** File description:
** display the title
*/

#include "defender.h"

void draw_title(sfRenderWindow *window, sprtext_s *sprtext)
{
    sfSprite_setScale(sprtext->title, (sfVector2f) {
        4,
        4
    });
    sfSprite_setPosition(sprtext->title, (sfVector2f) {
        550,
        100
    });
    sfRenderWindow_drawSprite(window, sprtext->title, NULL);
}
