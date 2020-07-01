/*
** EPITECH PROJECT, 2020
** play_button
** File description:
** display the play button in menu
*/

#include "defender.h"

void play_button(sfRenderWindow *window, sprtext_s *sprtext)
{
    int mouse_x = sfMouse_getPositionRenderWindow(window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(window).y;
    sfSprite_setPosition(sprtext->play_button, (sfVector2f) {
        800,
        400
    });
    if (mouse_x > 800 && mouse_x < 1032 && mouse_y > 400 && mouse_y < 472) {
        sfSprite_setPosition(sprtext->play_hover, (sfVector2f) {
            800,
            400
        });
        sfRenderWindow_drawSprite(window, sprtext->play_hover, NULL);
    }
    else
        sfRenderWindow_drawSprite(window, sprtext->play_button, NULL);
}
