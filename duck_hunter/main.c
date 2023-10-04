/* Copyright (C) 2016 Marcelo Serrano Zanetti - All Rights Reserved

 * Licensed under the GNU GPL V3.0 license. All conditions apply.

 * Powered by Allegro: http://liballeg.org/license.html

 */


#include <stdio.h>
#include <windows.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>


int main(){

    al_init();
    al_init_font_addon();
    al_init_image_addon();
    al_install_mouse();

    int width = 1280, height = 768;
    float pos_x = 10, pos_y = 30, mouse_x, mouse_y;
    bool hit = false;

    ALLEGRO_DISPLAY * display = al_create_display(width, height);
    //al_set_window_position(display, 200, 200);
    al_set_window_title(display, "HeadHunters");
    //al_set_display_icon(display, "./icon_path");

    ALLEGRO_FONT * font = al_create_builtin_font();
    ALLEGRO_TIMER * timer = al_create_timer(1.0 / 60.0);
    ALLEGRO_BITMAP * background = al_load_bitmap("./images/background.png");
    //ALLEGRO_BITMAP * cursor = al_load_bitmap("./images/cursor.png");
    ALLEGRO_BITMAP * aguia = al_load_bitmap("./images/aguia_spr1.png");

    ALLEGRO_EVENT_QUEUE * event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_timer_event_source(timer));
    al_register_event_source(event_queue, al_get_mouse_event_source());
    al_start_timer(timer);

    while(true){

        ALLEGRO_EVENT event;
        al_wait_for_event(event_queue, &event);

        if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
            break;
        }
        else if(event.type == ALLEGRO_EVENT_MOUSE_AXES){
            mouse_x = event.mouse.x;
            mouse_y = event.mouse.y;
            printf("(%.1f, %.1f)\n", mouse_x, mouse_y);
        }

        while(pos_x>=10 && pos_x<= width + 20){
            Sleep(250);
            pos_x += 25;

            if(hit == true){
                    printf("A aguia foi acertada!");
                    al_destroy_bitmap(aguia);
            }else{
                    break;
            }
        }
            printf("A aguia sobreviveu!");
            al_destroy_bitmap(aguia);

        al_clear_to_color(al_map_rgb(255,255,255));
        al_draw_bitmap(background, 0, 0, 0);
        al_draw_bitmap(aguia, pos_x, pos_y, 0);
        //al_draw_filled_rectangle(pos_x, pos_y, pos_x + 30.0, pos_y + 30.0, al_map_rgb(0, 0, 0));
        //al_draw_bitmap(cursor, 0, 0, 0);
        al_flip_display();

    }

    al_destroy_bitmap(aguia);
    al_destroy_bitmap(background);
    al_destroy_font(font);
    al_destroy_display(display);
    al_destroy_event_queue(event_queue);

    return 0;
}
