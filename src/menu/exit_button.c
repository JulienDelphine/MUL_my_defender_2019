/*
** EPITECH PROJECT, 2020
** exit_button
** File description:
** display the exit button in menu
*/

#include "defender.h"

void exit_button(sfRenderWindow *window, sprtext_s *sprtext)
{
    int mouse_x = sfMouse_getPositionRenderWindow(window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(window).y;
    sfSprite_setPosition(sprtext->exit_button, (sfVector2f) {800, 600});

    if (mouse_x > 800 && mouse_x < 1032 && mouse_y > 600 && mouse_y < 672) {
        sfSprite_setPosition(sprtext->exit_hover, (sfVector2f) {800, 600});
        sfRenderWindow_drawSprite(window, sprtext->exit_hover, NULL);
    }
    else
        sfRenderWindow_drawSprite(window, sprtext->exit_button, NULL);
}