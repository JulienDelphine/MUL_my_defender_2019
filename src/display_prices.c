/*
** EPITECH PROJECT, 2020
** display_prices
** File description:
** display buildings prices
*/

#include "defender.h"
#include "struct.h"

void coins_nb(game_s *game, sfText *text)
{
    sfText_setPosition(text, (sfVector2f) {1000, 10});
    if (game->coins == 1000)
        sfText_setString(text, "You have : 1000 coins");
    if (game->coins == 750)
        sfText_setString(text, "You have : 750 coins");
    if (game->coins == 500)
        sfText_setString(text, "You have : 500 coins");
    if (game->coins == 250)
        sfText_setString(text, "You have : 250 coins");
    if (game->coins <= 0)
        sfText_setString(text, "You don't have coins");
    sfRenderWindow_drawText(game->window, text, NULL);
}

void display_prices(game_s *game)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile("komikax.ttf");
    text = sfText_create();
    sfText_setString(text, "250");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, (sfVector2f) {75, 150});
    sfRenderWindow_drawText(game->window, text, NULL);
    sfText_setPosition(text, (sfVector2f) {75, 400});
    sfRenderWindow_drawText(game->window, text, NULL);
    sfText_setPosition(text, (sfVector2f) {75, 650});
    sfRenderWindow_drawText(game->window, text, NULL);
    sfText_setPosition(text, (sfVector2f) {75, 900});
    sfRenderWindow_drawText(game->window, text, NULL);
    sfText_setPosition(text, (sfVector2f) {75, 1150});
    sfRenderWindow_drawText(game->window, text, NULL);
    coins_nb(game, text);
}