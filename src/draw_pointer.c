/*
** EPITECH PROJECT, 2020
** draw_pointer
** File description:
** change pointer form and display it
*/

#include "defender.h"

void draw_pointer(sfRenderWindow *window, sprtext_s *sprtext)
{
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfSprite_setScale(sprtext->pointer, (sfVector2f) {
            0.25,
            0.25
    });
    sfSprite_setTexture(sprtext->pointer, sprtext->pointer_tex, 0);
    sfSprite_setPosition(sprtext->pointer, (sfVector2f) {
        sfMouse_getPositionRenderWindow(window).x - 16,
        sfMouse_getPositionRenderWindow(window).y - 8,
    });
    sfRenderWindow_drawSprite(window, sprtext->pointer, NULL);
}
