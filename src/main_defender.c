/*
** EPITECH PROJECT, 2020
** my defender
** File description:
** main for my defender
*/

#include "defender.h"

void init_rect(game_s *game)
{
    game->rect_orc.left = 10;
    game->rect_orc.top = 312;
    game->rect_orc.width = 35;
    game->rect_orc.height = 50;
    game->rect_orc.left = 10;
    game->rect_orc.top = 352;
    game->rect_orc.width = 35;
    game->rect_orc.height = 50;
}

void main_game(game_s *game, sprtext_s *sprtext)
{
    sfRenderWindow_drawSprite(game->window, sprtext->background_spr, NULL);
    sfRenderWindow_drawSprite(game->window, sprtext->white_rect, NULL);
    display_menu(sprtext, game);
    init_orc(game);
    init_mimic(game);
}

void main_menu(game_s *game, sprtext_s *sprtext)
{
    sfRenderWindow_drawSprite(game->window, sprtext->bg_sprite, NULL);
    draw_title(game->window, sprtext);
    play_button(game->window, sprtext);
    exit_button(game->window, sprtext);
}

void init_game(game_s *game)
{
    sfVideoMode mode = {1920, 1080, 32};
    game->pos_orc.x = 350;
    game->pos_orc.y = 100;
    game->Clock = sfClock_create();
    game->Clock_anim = sfClock_create();
    game->window = sfRenderWindow_create(mode, "My Defender",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 60);
    game->menu = 1;
    game->select = 0;
    game->coins = 1000;
}

int main(void)
{
    sprtext_s sprtext;
    game_s game;
    pause_s pause;
    init_game(&game);
    init_sprtext(&sprtext);
    init_rect(&game);
    game.first_carpet = 0;
    game.sec_carpet = 0;
    game.third_carpet = 0;
    game.fourth_carpet = 0;
    while (sfRenderWindow_isOpen(game.window)) {
        if (game.menu == 1)
            main_menu(&game, &sprtext);
        else
            main_game(&game, &sprtext);
        if (sfRenderWindow_pollEvent(game.window, &game.event) == sfTrue)
            analyse_events(&game, &sprtext, &pause);
        draw_pointer(game.window, &sprtext);
        sfRenderWindow_display(game.window);
    }
    return (0);
}