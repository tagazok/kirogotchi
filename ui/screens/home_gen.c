/**
 * @file home_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_gen.h"
#include "../ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t st_root_bg;
    static lv_style_t st_panel;
    static lv_style_t st_chip;
    static lv_style_t st_nav;
    static lv_style_t st_nav_active;
    static lv_style_t st_title;
    static lv_style_t st_text;
    static lv_style_t st_muted;
    static lv_style_t st_purple_text;
    static lv_style_t st_cyan_text;
    static lv_style_t st_bar_empty;
    static lv_style_t st_bar_purple;
    static lv_style_t st_bar_yellow;
    static lv_style_t st_bar_blue;
    static lv_style_t st_bar_pink;
    static lv_style_t st_dot_purple;
    static lv_style_t st_dot_yellow;
    static lv_style_t st_dot_blue;
    static lv_style_t st_dot_pink;
    static lv_style_t st_dot_green;
    static lv_style_t st_ghost_body;
    static lv_style_t st_ghost_eye;
    static lv_style_t st_ghost_blush;
    static lv_style_t st_rug;
    static lv_style_t st_screen_card;
    static lv_style_t st_laptop;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&st_root_bg);
        lv_style_set_bg_color(&st_root_bg, lv_color_hex(0x050507));
        lv_style_set_bg_opa(&st_root_bg, 255);
        lv_style_set_border_width(&st_root_bg, 0);
        lv_style_set_pad_all(&st_root_bg, 0);

        lv_style_init(&st_panel);
        lv_style_set_bg_color(&st_panel, lv_color_hex(0x0D0D12));
        lv_style_set_bg_opa(&st_panel, 245);
        lv_style_set_radius(&st_panel, 14);
        lv_style_set_border_width(&st_panel, 1);
        lv_style_set_border_color(&st_panel, lv_color_hex(0x24202E));
        lv_style_set_pad_all(&st_panel, 0);

        lv_style_init(&st_chip);
        lv_style_set_bg_color(&st_chip, lv_color_hex(0x12111A));
        lv_style_set_bg_opa(&st_chip, 255);
        lv_style_set_radius(&st_chip, 14);
        lv_style_set_border_width(&st_chip, 1);
        lv_style_set_border_color(&st_chip, lv_color_hex(0x272036));
        lv_style_set_pad_all(&st_chip, 0);

        lv_style_init(&st_nav);
        lv_style_set_bg_color(&st_nav, lv_color_hex(0x101017));
        lv_style_set_bg_opa(&st_nav, 255);
        lv_style_set_radius(&st_nav, 18);
        lv_style_set_border_width(&st_nav, 1);
        lv_style_set_border_color(&st_nav, lv_color_hex(0x22202A));
        lv_style_set_pad_all(&st_nav, 0);

        lv_style_init(&st_nav_active);
        lv_style_set_bg_color(&st_nav_active, lv_color_hex(0x24143D));
        lv_style_set_bg_opa(&st_nav_active, 255);
        lv_style_set_radius(&st_nav_active, 13);
        lv_style_set_border_width(&st_nav_active, 1);
        lv_style_set_border_color(&st_nav_active, lv_color_hex(0x7A36FF));
        lv_style_set_pad_all(&st_nav_active, 0);

        lv_style_init(&st_title);
        lv_style_set_text_color(&st_title, lv_color_hex(0x9B5CFF));

        lv_style_init(&st_text);
        lv_style_set_text_color(&st_text, lv_color_hex(0xF8F7FF));

        lv_style_init(&st_muted);
        lv_style_set_text_color(&st_muted, lv_color_hex(0x9B96A8));

        lv_style_init(&st_purple_text);
        lv_style_set_text_color(&st_purple_text, lv_color_hex(0x9B5CFF));

        lv_style_init(&st_cyan_text);
        lv_style_set_text_color(&st_cyan_text, lv_color_hex(0x58D6FF));

        lv_style_init(&st_bar_empty);
        lv_style_set_bg_color(&st_bar_empty, lv_color_hex(0x2A2632));
        lv_style_set_bg_opa(&st_bar_empty, 255);
        lv_style_set_radius(&st_bar_empty, 3);
        lv_style_set_border_width(&st_bar_empty, 0);

        lv_style_init(&st_bar_purple);
        lv_style_set_bg_color(&st_bar_purple, lv_color_hex(0x8B4DFF));
        lv_style_set_bg_opa(&st_bar_purple, 255);
        lv_style_set_radius(&st_bar_purple, 3);
        lv_style_set_border_width(&st_bar_purple, 0);

        lv_style_init(&st_bar_yellow);
        lv_style_set_bg_color(&st_bar_yellow, lv_color_hex(0xFFD935));
        lv_style_set_bg_opa(&st_bar_yellow, 255);
        lv_style_set_radius(&st_bar_yellow, 3);
        lv_style_set_border_width(&st_bar_yellow, 0);

        lv_style_init(&st_bar_blue);
        lv_style_set_bg_color(&st_bar_blue, lv_color_hex(0x3BA7FF));
        lv_style_set_bg_opa(&st_bar_blue, 255);
        lv_style_set_radius(&st_bar_blue, 3);
        lv_style_set_border_width(&st_bar_blue, 0);

        lv_style_init(&st_bar_pink);
        lv_style_set_bg_color(&st_bar_pink, lv_color_hex(0xFF5CB8));
        lv_style_set_bg_opa(&st_bar_pink, 255);
        lv_style_set_radius(&st_bar_pink, 3);
        lv_style_set_border_width(&st_bar_pink, 0);

        lv_style_init(&st_dot_purple);
        lv_style_set_bg_color(&st_dot_purple, lv_color_hex(0x9B5CFF));
        lv_style_set_bg_opa(&st_dot_purple, 255);
        lv_style_set_radius(&st_dot_purple, 8);
        lv_style_set_border_width(&st_dot_purple, 0);

        lv_style_init(&st_dot_yellow);
        lv_style_set_bg_color(&st_dot_yellow, lv_color_hex(0xFFD935));
        lv_style_set_bg_opa(&st_dot_yellow, 255);
        lv_style_set_radius(&st_dot_yellow, 8);
        lv_style_set_border_width(&st_dot_yellow, 0);

        lv_style_init(&st_dot_blue);
        lv_style_set_bg_color(&st_dot_blue, lv_color_hex(0x3BA7FF));
        lv_style_set_bg_opa(&st_dot_blue, 255);
        lv_style_set_radius(&st_dot_blue, 8);
        lv_style_set_border_width(&st_dot_blue, 0);

        lv_style_init(&st_dot_pink);
        lv_style_set_bg_color(&st_dot_pink, lv_color_hex(0xFF5CB8));
        lv_style_set_bg_opa(&st_dot_pink, 255);
        lv_style_set_radius(&st_dot_pink, 8);
        lv_style_set_border_width(&st_dot_pink, 0);

        lv_style_init(&st_dot_green);
        lv_style_set_bg_color(&st_dot_green, lv_color_hex(0x45E68A));
        lv_style_set_bg_opa(&st_dot_green, 255);
        lv_style_set_radius(&st_dot_green, 8);
        lv_style_set_border_width(&st_dot_green, 0);

        lv_style_init(&st_ghost_body);
        lv_style_set_bg_color(&st_ghost_body, lv_color_hex(0xFFFFFF));
        lv_style_set_bg_opa(&st_ghost_body, 255);
        lv_style_set_radius(&st_ghost_body, 28);
        lv_style_set_border_width(&st_ghost_body, 1);
        lv_style_set_border_color(&st_ghost_body, lv_color_hex(0xF1E9FF));
        lv_style_set_pad_all(&st_ghost_body, 0);

        lv_style_init(&st_ghost_eye);
        lv_style_set_bg_color(&st_ghost_eye, lv_color_hex(0x050507));
        lv_style_set_bg_opa(&st_ghost_eye, 255);
        lv_style_set_radius(&st_ghost_eye, 8);
        lv_style_set_border_width(&st_ghost_eye, 0);

        lv_style_init(&st_ghost_blush);
        lv_style_set_bg_color(&st_ghost_blush, lv_color_hex(0xC7A6FF));
        lv_style_set_bg_opa(&st_ghost_blush, 180);
        lv_style_set_radius(&st_ghost_blush, 4);
        lv_style_set_border_width(&st_ghost_blush, 0);

        lv_style_init(&st_rug);
        lv_style_set_bg_color(&st_rug, lv_color_hex(0x33205A));
        lv_style_set_bg_opa(&st_rug, 210);
        lv_style_set_radius(&st_rug, 32);
        lv_style_set_border_width(&st_rug, 1);
        lv_style_set_border_color(&st_rug, lv_color_hex(0x5E34A8));
        lv_style_set_pad_all(&st_rug, 0);

        lv_style_init(&st_screen_card);
        lv_style_set_bg_color(&st_screen_card, lv_color_hex(0x07080D));
        lv_style_set_bg_opa(&st_screen_card, 255);
        lv_style_set_radius(&st_screen_card, 4);
        lv_style_set_border_width(&st_screen_card, 1);
        lv_style_set_border_color(&st_screen_card, lv_color_hex(0x44305F));
        lv_style_set_pad_all(&st_screen_card, 0);

        lv_style_init(&st_laptop);
        lv_style_set_bg_color(&st_laptop, lv_color_hex(0x151421));
        lv_style_set_bg_opa(&st_laptop, 255);
        lv_style_set_radius(&st_laptop, 4);
        lv_style_set_border_width(&st_laptop, 1);
        lv_style_set_border_color(&st_laptop, lv_color_hex(0x4C3371));
        lv_style_set_pad_all(&st_laptop, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "home_#");

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 0);
    lv_obj_set_y(lv_obj_1, 0);
    lv_obj_set_width(lv_obj_1, 240);
    lv_obj_set_height(lv_obj_1, 280);
    lv_obj_add_style(lv_obj_1, &st_root_bg, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_2, 16);
    lv_obj_set_y(lv_obj_2, 16);
    lv_obj_set_width(lv_obj_2, 12);
    lv_obj_set_height(lv_obj_2, 16);
    lv_obj_add_style(lv_obj_2, &st_ghost_body, 0);
    
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_3, 19);
    lv_obj_set_y(lv_obj_3, 21);
    lv_obj_set_width(lv_obj_3, 3);
    lv_obj_set_height(lv_obj_3, 5);
    lv_obj_add_style(lv_obj_3, &st_ghost_eye, 0);
    
    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_4, 24);
    lv_obj_set_y(lv_obj_4, 21);
    lv_obj_set_width(lv_obj_4, 3);
    lv_obj_set_height(lv_obj_4, 5);
    lv_obj_add_style(lv_obj_4, &st_ghost_eye, 0);
    
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_0, 42);
    lv_obj_set_y(lv_label_0, 15);
    lv_label_set_text(lv_label_0, "KIROGOTCHI");
    lv_obj_add_style(lv_label_0, &st_title, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_1, 150);
    lv_obj_set_y(lv_label_1, 15);
    lv_label_set_text(lv_label_1, "08:35");
    lv_obj_add_style(lv_label_1, &st_text, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_2, 196);
    lv_obj_set_y(lv_label_2, 15);
    lv_label_set_text(lv_label_2, "BT");
    lv_obj_add_style(lv_label_2, &st_purple_text, 0);
    
    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_5, 216);
    lv_obj_set_y(lv_obj_5, 17);
    lv_obj_set_width(lv_obj_5, 14);
    lv_obj_set_height(lv_obj_5, 8);
    lv_obj_add_style(lv_obj_5, &st_bar_empty, 0);
    
    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_6, 218);
    lv_obj_set_y(lv_obj_6, 19);
    lv_obj_set_width(lv_obj_6, 9);
    lv_obj_set_height(lv_obj_6, 4);
    lv_obj_add_style(lv_obj_6, &st_bar_purple, 0);
    
    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_7, 10);
    lv_obj_set_y(lv_obj_7, 38);
    lv_obj_set_width(lv_obj_7, 220);
    lv_obj_set_height(lv_obj_7, 48);
    lv_obj_add_style(lv_obj_7, &st_panel, 0);
    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_8, 12);
    lv_obj_set_y(lv_obj_8, 10);
    lv_obj_set_width(lv_obj_8, 9);
    lv_obj_set_height(lv_obj_8, 9);
    lv_obj_add_style(lv_obj_8, &st_dot_purple, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_3, 27);
    lv_obj_set_y(lv_label_3, 7);
    lv_label_set_text(lv_label_3, "HUNGER");
    lv_obj_add_style(lv_label_3, &st_text, 0);
    
    lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_9, 12);
    lv_obj_set_y(lv_obj_9, 31);
    lv_obj_set_width(lv_obj_9, 8);
    lv_obj_set_height(lv_obj_9, 4);
    lv_obj_add_style(lv_obj_9, &st_bar_purple, 0);
    
    lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_10, 24);
    lv_obj_set_y(lv_obj_10, 31);
    lv_obj_set_width(lv_obj_10, 8);
    lv_obj_set_height(lv_obj_10, 4);
    lv_obj_add_style(lv_obj_10, &st_bar_purple, 0);
    
    lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_11, 36);
    lv_obj_set_y(lv_obj_11, 31);
    lv_obj_set_width(lv_obj_11, 8);
    lv_obj_set_height(lv_obj_11, 4);
    lv_obj_add_style(lv_obj_11, &st_bar_purple, 0);
    
    lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_12, 48);
    lv_obj_set_y(lv_obj_12, 31);
    lv_obj_set_width(lv_obj_12, 8);
    lv_obj_set_height(lv_obj_12, 4);
    lv_obj_add_style(lv_obj_12, &st_bar_empty, 0);
    
    lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_13, 66);
    lv_obj_set_y(lv_obj_13, 10);
    lv_obj_set_width(lv_obj_13, 9);
    lv_obj_set_height(lv_obj_13, 9);
    lv_obj_add_style(lv_obj_13, &st_dot_yellow, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_4, 81);
    lv_obj_set_y(lv_label_4, 7);
    lv_label_set_text(lv_label_4, "ENERGY");
    lv_obj_add_style(lv_label_4, &st_text, 0);
    
    lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_14, 66);
    lv_obj_set_y(lv_obj_14, 31);
    lv_obj_set_width(lv_obj_14, 8);
    lv_obj_set_height(lv_obj_14, 4);
    lv_obj_add_style(lv_obj_14, &st_bar_yellow, 0);
    
    lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_15, 78);
    lv_obj_set_y(lv_obj_15, 31);
    lv_obj_set_width(lv_obj_15, 8);
    lv_obj_set_height(lv_obj_15, 4);
    lv_obj_add_style(lv_obj_15, &st_bar_yellow, 0);
    
    lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_16, 90);
    lv_obj_set_y(lv_obj_16, 31);
    lv_obj_set_width(lv_obj_16, 8);
    lv_obj_set_height(lv_obj_16, 4);
    lv_obj_add_style(lv_obj_16, &st_bar_yellow, 0);
    
    lv_obj_t * lv_obj_17 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_17, 102);
    lv_obj_set_y(lv_obj_17, 31);
    lv_obj_set_width(lv_obj_17, 8);
    lv_obj_set_height(lv_obj_17, 4);
    lv_obj_add_style(lv_obj_17, &st_bar_empty, 0);
    
    lv_obj_t * lv_obj_18 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_18, 120);
    lv_obj_set_y(lv_obj_18, 10);
    lv_obj_set_width(lv_obj_18, 9);
    lv_obj_set_height(lv_obj_18, 9);
    lv_obj_add_style(lv_obj_18, &st_dot_blue, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_5, 135);
    lv_obj_set_y(lv_label_5, 7);
    lv_label_set_text(lv_label_5, "FOCUS");
    lv_obj_add_style(lv_label_5, &st_text, 0);
    
    lv_obj_t * lv_obj_19 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_19, 120);
    lv_obj_set_y(lv_obj_19, 31);
    lv_obj_set_width(lv_obj_19, 8);
    lv_obj_set_height(lv_obj_19, 4);
    lv_obj_add_style(lv_obj_19, &st_bar_blue, 0);
    
    lv_obj_t * lv_obj_20 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_20, 132);
    lv_obj_set_y(lv_obj_20, 31);
    lv_obj_set_width(lv_obj_20, 8);
    lv_obj_set_height(lv_obj_20, 4);
    lv_obj_add_style(lv_obj_20, &st_bar_blue, 0);
    
    lv_obj_t * lv_obj_21 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_21, 144);
    lv_obj_set_y(lv_obj_21, 31);
    lv_obj_set_width(lv_obj_21, 8);
    lv_obj_set_height(lv_obj_21, 4);
    lv_obj_add_style(lv_obj_21, &st_bar_blue, 0);
    
    lv_obj_t * lv_obj_22 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_22, 156);
    lv_obj_set_y(lv_obj_22, 31);
    lv_obj_set_width(lv_obj_22, 8);
    lv_obj_set_height(lv_obj_22, 4);
    lv_obj_add_style(lv_obj_22, &st_bar_empty, 0);
    
    lv_obj_t * lv_obj_23 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_23, 174);
    lv_obj_set_y(lv_obj_23, 10);
    lv_obj_set_width(lv_obj_23, 9);
    lv_obj_set_height(lv_obj_23, 9);
    lv_obj_add_style(lv_obj_23, &st_dot_pink, 0);
    
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_6, 189);
    lv_obj_set_y(lv_label_6, 7);
    lv_label_set_text(lv_label_6, "SOC");
    lv_obj_add_style(lv_label_6, &st_text, 0);
    
    lv_obj_t * lv_obj_24 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_24, 174);
    lv_obj_set_y(lv_obj_24, 31);
    lv_obj_set_width(lv_obj_24, 8);
    lv_obj_set_height(lv_obj_24, 4);
    lv_obj_add_style(lv_obj_24, &st_bar_pink, 0);
    
    lv_obj_t * lv_obj_25 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_25, 186);
    lv_obj_set_y(lv_obj_25, 31);
    lv_obj_set_width(lv_obj_25, 8);
    lv_obj_set_height(lv_obj_25, 4);
    lv_obj_add_style(lv_obj_25, &st_bar_pink, 0);
    
    lv_obj_t * lv_obj_26 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_26, 198);
    lv_obj_set_y(lv_obj_26, 31);
    lv_obj_set_width(lv_obj_26, 8);
    lv_obj_set_height(lv_obj_26, 4);
    lv_obj_add_style(lv_obj_26, &st_bar_pink, 0);
    
    lv_obj_t * lv_obj_27 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_27, 210);
    lv_obj_set_y(lv_obj_27, 31);
    lv_obj_set_width(lv_obj_27, 8);
    lv_obj_set_height(lv_obj_27, 4);
    lv_obj_add_style(lv_obj_27, &st_bar_empty, 0);
    
    lv_obj_t * lv_obj_28 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_28, 14);
    lv_obj_set_y(lv_obj_28, 94);
    lv_obj_set_width(lv_obj_28, 144);
    lv_obj_set_height(lv_obj_28, 30);
    lv_obj_add_style(lv_obj_28, &st_chip, 0);
    lv_obj_t * lv_obj_29 = lv_obj_create(lv_obj_28);
    lv_obj_set_x(lv_obj_29, 12);
    lv_obj_set_y(lv_obj_29, 8);
    lv_obj_set_width(lv_obj_29, 14);
    lv_obj_set_height(lv_obj_29, 14);
    lv_obj_add_style(lv_obj_29, &st_dot_purple, 0);
    
    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_28);
    lv_obj_set_x(lv_label_7, 36);
    lv_obj_set_y(lv_label_7, 7);
    lv_label_set_text(lv_label_7, "6");
    lv_obj_add_style(lv_label_7, &st_purple_text, 0);
    
    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_28);
    lv_obj_set_x(lv_label_8, 52);
    lv_obj_set_y(lv_label_8, 7);
    lv_label_set_text(lv_label_8, "matches nearby");
    lv_obj_add_style(lv_label_8, &st_text, 0);
    
    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_28);
    lv_obj_set_x(lv_label_9, 128);
    lv_obj_set_y(lv_label_9, 7);
    lv_label_set_text(lv_label_9, ">");
    lv_obj_add_style(lv_label_9, &st_muted, 0);
    
    lv_obj_t * lv_obj_30 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_30, 14);
    lv_obj_set_y(lv_obj_30, 134);
    lv_obj_set_width(lv_obj_30, 70);
    lv_obj_set_height(lv_obj_30, 70);
    lv_obj_add_style(lv_obj_30, &st_screen_card, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_30);
    lv_obj_set_x(lv_label_10, 8);
    lv_obj_set_y(lv_label_10, 6);
    lv_label_set_text(lv_label_10, "def kiro():");
    lv_obj_add_style(lv_label_10, &st_purple_text, 0);
    
    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_30);
    lv_obj_set_x(lv_label_11, 14);
    lv_obj_set_y(lv_label_11, 20);
    lv_label_set_text(lv_label_11, "coffee()");
    lv_obj_add_style(lv_label_11, &st_cyan_text, 0);
    
    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_30);
    lv_obj_set_x(lv_label_12, 14);
    lv_obj_set_y(lv_label_12, 34);
    lv_label_set_text(lv_label_12, "code()");
    lv_obj_add_style(lv_label_12, &st_cyan_text, 0);
    
    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_30);
    lv_obj_set_x(lv_label_13, 14);
    lv_obj_set_y(lv_label_13, 48);
    lv_label_set_text(lv_label_13, "ship()");
    lv_obj_add_style(lv_label_13, &st_cyan_text, 0);
    
    lv_obj_t * lv_label_14 = lv_label_create(lv_obj_30);
    lv_obj_set_x(lv_label_14, 8);
    lv_obj_set_y(lv_label_14, 60);
    lv_label_set_text(lv_label_14, ">_");
    lv_obj_add_style(lv_label_14, &st_muted, 0);
    
    lv_obj_t * lv_obj_31 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_31, 42);
    lv_obj_set_y(lv_obj_31, 205);
    lv_obj_set_width(lv_obj_31, 28);
    lv_obj_set_height(lv_obj_31, 22);
    lv_obj_add_style(lv_obj_31, &st_panel, 0);
    lv_obj_t * lv_obj_32 = lv_obj_create(lv_obj_31);
    lv_obj_set_x(lv_obj_32, 8);
    lv_obj_set_y(lv_obj_32, 7);
    lv_obj_set_width(lv_obj_32, 3);
    lv_obj_set_height(lv_obj_32, 6);
    lv_obj_add_style(lv_obj_32, &st_bar_purple, 0);
    
    lv_obj_t * lv_obj_33 = lv_obj_create(lv_obj_31);
    lv_obj_set_x(lv_obj_33, 17);
    lv_obj_set_y(lv_obj_33, 7);
    lv_obj_set_width(lv_obj_33, 3);
    lv_obj_set_height(lv_obj_33, 6);
    lv_obj_add_style(lv_obj_33, &st_bar_purple, 0);
    
    lv_obj_t * lv_obj_34 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_34, 19);
    lv_obj_set_y(lv_obj_34, 211);
    lv_obj_set_width(lv_obj_34, 12);
    lv_obj_set_height(lv_obj_34, 14);
    lv_obj_add_style(lv_obj_34, &st_dot_green, 0);
    
    lv_obj_t * lv_obj_35 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_35, 16);
    lv_obj_set_y(lv_obj_35, 224);
    lv_obj_set_width(lv_obj_35, 18);
    lv_obj_set_height(lv_obj_35, 8);
    lv_obj_add_style(lv_obj_35, &st_panel, 0);
    
    lv_obj_t * lv_obj_36 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_36, 72);
    lv_obj_set_y(lv_obj_36, 187);
    lv_obj_set_width(lv_obj_36, 86);
    lv_obj_set_height(lv_obj_36, 30);
    lv_obj_add_style(lv_obj_36, &st_rug, 0);
    
    lv_obj_t * lv_obj_37 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_37, 90);
    lv_obj_set_y(lv_obj_37, 130);
    lv_obj_set_width(lv_obj_37, 62);
    lv_obj_set_height(lv_obj_37, 64);
    lv_obj_add_style(lv_obj_37, &st_ghost_body, 0);
    lv_obj_t * lv_obj_38 = lv_obj_create(lv_obj_37);
    lv_obj_set_x(lv_obj_38, 19);
    lv_obj_set_y(lv_obj_38, 20);
    lv_obj_set_width(lv_obj_38, 8);
    lv_obj_set_height(lv_obj_38, 18);
    lv_obj_add_style(lv_obj_38, &st_ghost_eye, 0);
    
    lv_obj_t * lv_obj_39 = lv_obj_create(lv_obj_37);
    lv_obj_set_x(lv_obj_39, 37);
    lv_obj_set_y(lv_obj_39, 20);
    lv_obj_set_width(lv_obj_39, 8);
    lv_obj_set_height(lv_obj_39, 18);
    lv_obj_add_style(lv_obj_39, &st_ghost_eye, 0);
    
    lv_obj_t * lv_obj_40 = lv_obj_create(lv_obj_37);
    lv_obj_set_x(lv_obj_40, 13);
    lv_obj_set_y(lv_obj_40, 39);
    lv_obj_set_width(lv_obj_40, 7);
    lv_obj_set_height(lv_obj_40, 4);
    lv_obj_add_style(lv_obj_40, &st_ghost_blush, 0);
    
    lv_obj_t * lv_obj_41 = lv_obj_create(lv_obj_37);
    lv_obj_set_x(lv_obj_41, 44);
    lv_obj_set_y(lv_obj_41, 39);
    lv_obj_set_width(lv_obj_41, 7);
    lv_obj_set_height(lv_obj_41, 4);
    lv_obj_add_style(lv_obj_41, &st_ghost_blush, 0);
    
    lv_obj_t * lv_obj_42 = lv_obj_create(lv_obj_37);
    lv_obj_set_x(lv_obj_42, 6);
    lv_obj_set_y(lv_obj_42, 49);
    lv_obj_set_width(lv_obj_42, 15);
    lv_obj_set_height(lv_obj_42, 14);
    lv_obj_add_style(lv_obj_42, &st_ghost_body, 0);
    
    lv_obj_t * lv_obj_43 = lv_obj_create(lv_obj_37);
    lv_obj_set_x(lv_obj_43, 24);
    lv_obj_set_y(lv_obj_43, 50);
    lv_obj_set_width(lv_obj_43, 15);
    lv_obj_set_height(lv_obj_43, 13);
    lv_obj_add_style(lv_obj_43, &st_ghost_body, 0);
    
    lv_obj_t * lv_obj_44 = lv_obj_create(lv_obj_37);
    lv_obj_set_x(lv_obj_44, 42);
    lv_obj_set_y(lv_obj_44, 49);
    lv_obj_set_width(lv_obj_44, 15);
    lv_obj_set_height(lv_obj_44, 14);
    lv_obj_add_style(lv_obj_44, &st_ghost_body, 0);
    
    lv_obj_t * lv_label_15 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_15, 176);
    lv_obj_set_y(lv_label_15, 125);
    lv_label_set_text(lv_label_15, "</>");
    lv_obj_add_style(lv_label_15, &st_title, 0);
    
    lv_obj_t * lv_obj_45 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_45, 158);
    lv_obj_set_y(lv_obj_45, 178);
    lv_obj_set_width(lv_obj_45, 58);
    lv_obj_set_height(lv_obj_45, 34);
    lv_obj_add_style(lv_obj_45, &st_laptop, 0);
    lv_obj_t * lv_obj_46 = lv_obj_create(lv_obj_45);
    lv_obj_set_x(lv_obj_46, 27);
    lv_obj_set_y(lv_obj_46, 13);
    lv_obj_set_width(lv_obj_46, 8);
    lv_obj_set_height(lv_obj_46, 10);
    lv_obj_add_style(lv_obj_46, &st_ghost_body, 0);
    
    lv_obj_t * lv_obj_47 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_47, 207);
    lv_obj_set_y(lv_obj_47, 194);
    lv_obj_set_width(lv_obj_47, 20);
    lv_obj_set_height(lv_obj_47, 22);
    lv_obj_add_style(lv_obj_47, &st_panel, 0);
    
    lv_obj_t * lv_label_16 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_16, 209);
    lv_obj_set_y(lv_label_16, 199);
    lv_label_set_text(lv_label_16, "kiro");
    lv_obj_add_style(lv_label_16, &st_purple_text, 0);
    
    lv_obj_t * lv_obj_48 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_48, 12);
    lv_obj_set_y(lv_obj_48, 228);
    lv_obj_set_width(lv_obj_48, 216);
    lv_obj_set_height(lv_obj_48, 42);
    lv_obj_add_style(lv_obj_48, &st_nav, 0);
    lv_obj_t * lv_obj_49 = lv_obj_create(lv_obj_48);
    lv_obj_set_x(lv_obj_49, 7);
    lv_obj_set_y(lv_obj_49, 5);
    lv_obj_set_width(lv_obj_49, 43);
    lv_obj_set_height(lv_obj_49, 32);
    lv_obj_add_style(lv_obj_49, &st_nav_active, 0);
    lv_obj_t * lv_label_17 = lv_label_create(lv_obj_49);
    lv_obj_set_x(lv_label_17, 14);
    lv_obj_set_y(lv_label_17, 1);
    lv_label_set_text(lv_label_17, "H");
    lv_obj_add_style(lv_label_17, &st_purple_text, 0);
    
    lv_obj_t * lv_label_18 = lv_label_create(lv_obj_49);
    lv_obj_set_x(lv_label_18, 8);
    lv_obj_set_y(lv_label_18, 18);
    lv_label_set_text(lv_label_18, "HOME");
    lv_obj_add_style(lv_label_18, &st_purple_text, 0);
    
    lv_obj_t * lv_label_19 = lv_label_create(lv_obj_48);
    lv_obj_set_x(lv_label_19, 68);
    lv_obj_set_y(lv_label_19, 7);
    lv_label_set_text(lv_label_19, "F");
    lv_obj_add_style(lv_label_19, &st_muted, 0);
    
    lv_obj_t * lv_label_20 = lv_label_create(lv_obj_48);
    lv_obj_set_x(lv_label_20, 60);
    lv_obj_set_y(lv_label_20, 25);
    lv_label_set_text(lv_label_20, "FEED");
    lv_obj_add_style(lv_label_20, &st_muted, 0);
    
    lv_obj_t * lv_label_21 = lv_label_create(lv_obj_48);
    lv_obj_set_x(lv_label_21, 119);
    lv_obj_set_y(lv_label_21, 7);
    lv_label_set_text(lv_label_21, "S");
    lv_obj_add_style(lv_label_21, &st_muted, 0);
    
    lv_obj_t * lv_label_22 = lv_label_create(lv_obj_48);
    lv_obj_set_x(lv_label_22, 106);
    lv_obj_set_y(lv_label_22, 25);
    lv_label_set_text(lv_label_22, "SOCIAL");
    lv_obj_add_style(lv_label_22, &st_muted, 0);
    
    lv_obj_t * lv_label_23 = lv_label_create(lv_obj_48);
    lv_obj_set_x(lv_label_23, 177);
    lv_obj_set_y(lv_label_23, 7);
    lv_label_set_text(lv_label_23, "A");
    lv_obj_add_style(lv_label_23, &st_muted, 0);
    
    lv_obj_t * lv_label_24 = lv_label_create(lv_obj_48);
    lv_obj_set_x(lv_label_24, 156);
    lv_obj_set_y(lv_label_24, 25);
    lv_label_set_text(lv_label_24, "ANALYTICS");
    lv_obj_add_style(lv_label_24, &st_muted, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

