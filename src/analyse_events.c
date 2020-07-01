/*
** EPITECH PROJECT, 2020
** analyse_events
** File description:
** analyse all the events
*/

#include "defender.h"

void analyse_events(game_s *game, sprtext_s *sprtext, pause_s *pause)
{
    int mouse_x = sfMouse_getPositionRenderWindow(game->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(game->window).y;

    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.key.code == sfKeyEscape && game->menu == 1)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtMouseButtonPressed)
        check_coord_evt(mouse_x, mouse_y, game, sprtext);
    if (game->event.key.code == sfKeyEscape && game->menu == 0)
        pause_menu(sprtext, game, pause);
}