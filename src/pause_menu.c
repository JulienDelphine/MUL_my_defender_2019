/*
** EPITECH PROJECT, 2020
** pause_menu
** File description:
** launch the menu when in pause
*/

#include "defender.h"

void init_pause(pause_s *pause)
{
    pause->resume = sfSprite_create();
    pause->resume_tex = sfTexture_createFromFile("img/resume.png", NULL);
    sfSprite_setPosition(pause->resume, (sfVector2f) {795, 300});
    sfSprite_setTexture(pause->resume, pause->resume_tex, 0);
    pause->main_menu = sfSprite_create();
    pause->main_menu_tex = sfTexture_createFromFile("img/menu.png", NULL);
    sfSprite_setPosition(pause->main_menu, (sfVector2f) {795, 550});
    sfSprite_setTexture(pause->main_menu, pause->main_menu_tex, 0);
    pause->exit = sfSprite_create();
    pause->exit_tex = sfTexture_createFromFile("img/exit.png", NULL);
    sfSprite_setPosition(pause->exit, (sfVector2f) {795, 800});
    sfSprite_setTexture(pause->exit, pause->exit_tex, 0);
}

int check_pause(game_s *game, int mouse_x, int mouse_y, sprtext_s *sprtext)
{
    if (game->event.key.code == sfKeyEnter)
            return (1);
    if (game->event.type == sfEvtMouseButtonPressed) {
        if (check_coord_evt_pause(game, mouse_x, mouse_y, sprtext)
        == 1)
            return (1);
    }
    return (0);
}

int pause_events(game_s *game, sprtext_s *sprtext)
{
    int mouse_x = sfMouse_getPositionRenderWindow(game->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(game->window).y;

    if (sfRenderWindow_pollEvent(game->window, &game->event) == sfTrue) {
        if (check_pause(game, mouse_x, mouse_y, sprtext) == 1)
            return (1);
        }
    return (0);
}

void display_text(game_s *game)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile("komikax.ttf");
    text = sfText_create();
    sfText_setString(text, "PAUSE");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, (sfVector2f) {850, 140});
    sfRenderWindow_drawText(game->window, text, NULL);
}

int pause_menu(sprtext_s *sprtext, game_s *game, pause_s *pause)
{
    init_pause(pause);
    while (pause_events(game, sprtext) == 0) {
        sfRenderWindow_clear(game->window, sfBlack);
        sfRenderWindow_drawSprite(game->window, pause->resume, NULL);
        sfRenderWindow_drawSprite(game->window, pause->main_menu, NULL);
        sfRenderWindow_drawSprite(game->window, pause->exit, NULL);
        draw_pointer(game->window, sprtext);
        display_text(game);
        sfRenderWindow_display(game->window);
    }
    return (0);
}