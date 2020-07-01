/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** all structure for defender
*/

#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Config.h>
#include <SFML/System.h>

#ifndef STRUCT_
#define STRUCT_

typedef struct button_s {
    sfRectangleShape *rect;
}button_s;

typedef struct sprtext_s {
    sfSprite *pointer;
    sfTexture *pointer_tex;
    sfSprite *bg_sprite;
    sfTexture *bg_tex;
    sfSprite *play_button;
    sfTexture *play_button_tex;
    sfSprite *play_hover;
    sfTexture *play_hover_tex;
    sfSprite *exit_button;
    sfTexture *exit_button_tex;
    sfSprite *exit_hover;
    sfTexture *exit_hover_tex;
    sfSprite *title;
    sfTexture *title_tex;
    sfSprite *background_spr;
    sfTexture *background_tex;
    sfSprite *white_rect;
    sfTexture *white_rect_tex;
    sfSprite *orange_square;
    sfTexture *orange_square_tex;
    sfSprite *clear_orange;
    sfTexture *clear_orange_tex;
    sfSprite *arcan_tower;
    sfTexture *arcan_tower_tex;
    sfSprite *archer_tower;
    sfTexture *archer_tex;
    sfSprite *mortar;
    sfTexture *mortar_tex;
    sfSprite *magma_tower;
    sfTexture *magma_tex;
    sfSprite *down;
    sfTexture *down_tex;
} sprtext_s;

typedef struct game_s {
    sfEvent event;
    sfRenderWindow *window;
    int menu;
    sfVector2f pos_orc;
    sfIntRect rect_orc;
    sfVector2f pos_mimic;
    sfIntRect rect_mimic;
    sfClock *Clock;
    sfClock *Clock_anim;
    int select;
    int first_carpet;
    int first_carpet_occ;
    int sec_carpet;
    int sec_carpet_occ;
    int third_carpet;
    int third_carpet_occ;
    int fourth_carpet;
    int fourth_carpet_occ;
    int coins;
} game_s;

typedef struct pause_s {
    sfSprite *resume;
    sfTexture *resume_tex;
    sfSprite *exit;
    sfTexture *exit_tex;
    sfSprite *main_menu;
    sfTexture *main_menu_tex;
} pause_s;

typedef struct orc_s {
    sfSprite *orc_sp;
    sfTexture *orc_tx;
} orc_s;

typedef struct mimic_s {
    sfSprite *mimic_sp;
    sfTexture *mimic_tx;
} mimic_s;

#endif /* STRUCT_ */