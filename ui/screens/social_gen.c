/**
 * @file social_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "social_gen.h"
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

lv_obj_t * social_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t st_root_bg;
    static lv_style_t st_panel;
    static lv_style_t st_panel_soft;
    static lv_style_t st_tab_bar;
    static lv_style_t st_tab_active;
    static lv_style_t st_row_selected;
    static lv_style_t st_text;
    static lv_style_t st_muted;
    static lv_style_t st_title;
    static lv_style_t st_green_text;
    static lv_style_t st_blue_text;
    static lv_style_t st_purple_text;
    static lv_style_t st_orange_text;
    static lv_style_t st_tab_text_dark;
    static lv_style_t st_bar_track;
    static lv_style_t st_bar_green;
    static lv_style_t st_bar_blue;
    static lv_style_t st_bar_orange;
    static lv_style_t st_bar_purple;
    static lv_style_t st_bar_rust;
    static lv_style_t st_dot_green;
    static lv_style_t st_dot_blue;
    static lv_style_t st_dot_orange;
    static lv_style_t st_dot_purple;
    static lv_style_t st_dot_rust;
    static lv_style_t st_dot_yellow;
    static lv_style_t st_divider;
    static lv_style_t st_icon_green;
    static lv_style_t st_icon_purple;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&st_root_bg);
        lv_style_set_bg_color(&st_root_bg, lv_color_hex(0x050507));
        lv_style_set_bg_opa(&st_root_bg, 255);
        lv_style_set_border_width(&st_root_bg, 0);
        lv_style_set_pad_all(&st_root_bg, 0);

        lv_style_init(&st_panel);
        lv_style_set_bg_color(&st_panel, lv_color_hex(0x0D0F14));
        lv_style_set_bg_opa(&st_panel, 245);
        lv_style_set_radius(&st_panel, 14);
        lv_style_set_border_width(&st_panel, 1);
        lv_style_set_border_color(&st_panel, lv_color_hex(0x222634));
        lv_style_set_pad_all(&st_panel, 0);

        lv_style_init(&st_panel_soft);
        lv_style_set_bg_color(&st_panel_soft, lv_color_hex(0x11141B));
        lv_style_set_bg_opa(&st_panel_soft, 255);
        lv_style_set_radius(&st_panel_soft, 14);
        lv_style_set_border_width(&st_panel_soft, 1);
        lv_style_set_border_color(&st_panel_soft, lv_color_hex(0x252A38));
        lv_style_set_pad_all(&st_panel_soft, 0);

        lv_style_init(&st_tab_bar);
        lv_style_set_bg_color(&st_tab_bar, lv_color_hex(0x111318));
        lv_style_set_bg_opa(&st_tab_bar, 255);
        lv_style_set_radius(&st_tab_bar, 14);
        lv_style_set_border_width(&st_tab_bar, 0);
        lv_style_set_pad_all(&st_tab_bar, 0);

        lv_style_init(&st_tab_active);
        lv_style_set_bg_color(&st_tab_active, lv_color_hex(0x16E0A7));
        lv_style_set_bg_opa(&st_tab_active, 255);
        lv_style_set_radius(&st_tab_active, 14);
        lv_style_set_border_width(&st_tab_active, 0);
        lv_style_set_pad_all(&st_tab_active, 0);

        lv_style_init(&st_row_selected);
        lv_style_set_bg_color(&st_row_selected, lv_color_hex(0x101D32));
        lv_style_set_bg_opa(&st_row_selected, 255);
        lv_style_set_radius(&st_row_selected, 10);
        lv_style_set_border_width(&st_row_selected, 1);
        lv_style_set_border_color(&st_row_selected, lv_color_hex(0x245AA0));
        lv_style_set_pad_all(&st_row_selected, 0);

        lv_style_init(&st_text);
        lv_style_set_text_color(&st_text, lv_color_hex(0xF7F7FF));

        lv_style_init(&st_muted);
        lv_style_set_text_color(&st_muted, lv_color_hex(0x9DA2B3));

        lv_style_init(&st_title);
        lv_style_set_text_color(&st_title, lv_color_hex(0xF7F7FF));

        lv_style_init(&st_green_text);
        lv_style_set_text_color(&st_green_text, lv_color_hex(0x16E0A7));

        lv_style_init(&st_blue_text);
        lv_style_set_text_color(&st_blue_text, lv_color_hex(0x32A8FF));

        lv_style_init(&st_purple_text);
        lv_style_set_text_color(&st_purple_text, lv_color_hex(0x9B5CFF));

        lv_style_init(&st_orange_text);
        lv_style_set_text_color(&st_orange_text, lv_color_hex(0xFF9F1C));

        lv_style_init(&st_tab_text_dark);
        lv_style_set_text_color(&st_tab_text_dark, lv_color_hex(0x050507));

        lv_style_init(&st_bar_track);
        lv_style_set_bg_color(&st_bar_track, lv_color_hex(0x2A2D35));
        lv_style_set_bg_opa(&st_bar_track, 255);
        lv_style_set_radius(&st_bar_track, 3);
        lv_style_set_border_width(&st_bar_track, 0);

        lv_style_init(&st_bar_green);
        lv_style_set_bg_color(&st_bar_green, lv_color_hex(0x16E0A7));
        lv_style_set_bg_opa(&st_bar_green, 255);
        lv_style_set_radius(&st_bar_green, 3);
        lv_style_set_border_width(&st_bar_green, 0);

        lv_style_init(&st_bar_blue);
        lv_style_set_bg_color(&st_bar_blue, lv_color_hex(0x32A8FF));
        lv_style_set_bg_opa(&st_bar_blue, 255);
        lv_style_set_radius(&st_bar_blue, 3);
        lv_style_set_border_width(&st_bar_blue, 0);

        lv_style_init(&st_bar_orange);
        lv_style_set_bg_color(&st_bar_orange, lv_color_hex(0xFF9F1C));
        lv_style_set_bg_opa(&st_bar_orange, 255);
        lv_style_set_radius(&st_bar_orange, 3);
        lv_style_set_border_width(&st_bar_orange, 0);

        lv_style_init(&st_bar_purple);
        lv_style_set_bg_color(&st_bar_purple, lv_color_hex(0x9B5CFF));
        lv_style_set_bg_opa(&st_bar_purple, 255);
        lv_style_set_radius(&st_bar_purple, 3);
        lv_style_set_border_width(&st_bar_purple, 0);

        lv_style_init(&st_bar_rust);
        lv_style_set_bg_color(&st_bar_rust, lv_color_hex(0xD65A1F));
        lv_style_set_bg_opa(&st_bar_rust, 255);
        lv_style_set_radius(&st_bar_rust, 3);
        lv_style_set_border_width(&st_bar_rust, 0);

        lv_style_init(&st_dot_green);
        lv_style_set_bg_color(&st_dot_green, lv_color_hex(0x16E0A7));
        lv_style_set_bg_opa(&st_dot_green, 255);
        lv_style_set_radius(&st_dot_green, 8);
        lv_style_set_border_width(&st_dot_green, 0);

        lv_style_init(&st_dot_blue);
        lv_style_set_bg_color(&st_dot_blue, lv_color_hex(0x32A8FF));
        lv_style_set_bg_opa(&st_dot_blue, 255);
        lv_style_set_radius(&st_dot_blue, 8);
        lv_style_set_border_width(&st_dot_blue, 0);

        lv_style_init(&st_dot_orange);
        lv_style_set_bg_color(&st_dot_orange, lv_color_hex(0xFF9F1C));
        lv_style_set_bg_opa(&st_dot_orange, 255);
        lv_style_set_radius(&st_dot_orange, 8);
        lv_style_set_border_width(&st_dot_orange, 0);

        lv_style_init(&st_dot_purple);
        lv_style_set_bg_color(&st_dot_purple, lv_color_hex(0x9B5CFF));
        lv_style_set_bg_opa(&st_dot_purple, 255);
        lv_style_set_radius(&st_dot_purple, 8);
        lv_style_set_border_width(&st_dot_purple, 0);

        lv_style_init(&st_dot_rust);
        lv_style_set_bg_color(&st_dot_rust, lv_color_hex(0xD65A1F));
        lv_style_set_bg_opa(&st_dot_rust, 255);
        lv_style_set_radius(&st_dot_rust, 8);
        lv_style_set_border_width(&st_dot_rust, 0);

        lv_style_init(&st_dot_yellow);
        lv_style_set_bg_color(&st_dot_yellow, lv_color_hex(0xFFD935));
        lv_style_set_bg_opa(&st_dot_yellow, 255);
        lv_style_set_radius(&st_dot_yellow, 8);
        lv_style_set_border_width(&st_dot_yellow, 0);

        lv_style_init(&st_divider);
        lv_style_set_bg_color(&st_divider, lv_color_hex(0x303442));
        lv_style_set_bg_opa(&st_divider, 255);
        lv_style_set_radius(&st_divider, 0);
        lv_style_set_border_width(&st_divider, 0);

        lv_style_init(&st_icon_green);
        lv_style_set_bg_color(&st_icon_green, lv_color_hex(0x103B31));
        lv_style_set_bg_opa(&st_icon_green, 255);
        lv_style_set_radius(&st_icon_green, 8);
        lv_style_set_border_width(&st_icon_green, 1);
        lv_style_set_border_color(&st_icon_green, lv_color_hex(0x16E0A7));
        lv_style_set_pad_all(&st_icon_green, 0);

        lv_style_init(&st_icon_purple);
        lv_style_set_bg_color(&st_icon_purple, lv_color_hex(0x24143D));
        lv_style_set_bg_opa(&st_icon_purple, 255);
        lv_style_set_radius(&st_icon_purple, 8);
        lv_style_set_border_width(&st_icon_purple, 1);
        lv_style_set_border_color(&st_icon_purple, lv_color_hex(0x9B5CFF));
        lv_style_set_pad_all(&st_icon_purple, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "social_#");

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 0);
    lv_obj_set_y(lv_obj_1, 0);
    lv_obj_set_width(lv_obj_1, 240);
    lv_obj_set_height(lv_obj_1, 280);
    lv_obj_add_style(lv_obj_1, &st_root_bg, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_0, 36);
    lv_obj_set_y(lv_label_0, 16);
    lv_label_set_text(lv_label_0, "</>");
    lv_obj_add_style(lv_label_0, &st_green_text, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_1, 78);
    lv_obj_set_y(lv_label_1, 16);
    lv_label_set_text(lv_label_1, "LANG STATS");
    lv_obj_add_style(lv_label_1, &st_title, 0);
    
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_2, 12);
    lv_obj_set_y(lv_obj_2, 42);
    lv_obj_set_width(lv_obj_2, 216);
    lv_obj_set_height(lv_obj_2, 28);
    lv_obj_add_style(lv_obj_2, &st_tab_bar, 0);
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
    lv_obj_set_x(lv_obj_3, 0);
    lv_obj_set_y(lv_obj_3, 0);
    lv_obj_set_width(lv_obj_3, 72);
    lv_obj_set_height(lv_obj_3, 28);
    lv_obj_add_style(lv_obj_3, &st_tab_active, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_2);
    lv_obj_set_x(lv_label_2, 26);
    lv_obj_set_y(lv_label_2, 7);
    lv_label_set_text(lv_label_2, "NOW");
    lv_obj_add_style(lv_label_2, &st_tab_text_dark, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_2);
    lv_obj_set_x(lv_label_3, 92);
    lv_obj_set_y(lv_label_3, 7);
    lv_label_set_text(lv_label_3, "TODAY");
    lv_obj_add_style(lv_label_3, &st_muted, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_2);
    lv_obj_set_x(lv_label_4, 176);
    lv_obj_set_y(lv_label_4, 7);
    lv_label_set_text(lv_label_4, "7D");
    lv_obj_add_style(lv_label_4, &st_muted, 0);
    
    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_4, 12);
    lv_obj_set_y(lv_obj_4, 78);
    lv_obj_set_width(lv_obj_4, 216);
    lv_obj_set_height(lv_obj_4, 44);
    lv_obj_add_style(lv_obj_4, &st_panel_soft, 0);
    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_4);
    lv_obj_set_x(lv_obj_5, 16);
    lv_obj_set_y(lv_obj_5, 12);
    lv_obj_set_width(lv_obj_5, 18);
    lv_obj_set_height(lv_obj_5, 18);
    lv_obj_add_style(lv_obj_5, &st_icon_green, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_5, 44);
    lv_obj_set_y(lv_label_5, 8);
    lv_label_set_text(lv_label_5, "Nearby");
    lv_obj_add_style(lv_label_5, &st_muted, 0);
    
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_6, 44);
    lv_obj_set_y(lv_label_6, 24);
    lv_label_set_text(lv_label_6, "23");
    lv_obj_add_style(lv_label_6, &st_green_text, 0);
    
    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_4);
    lv_obj_set_x(lv_obj_6, 108);
    lv_obj_set_y(lv_obj_6, 8);
    lv_obj_set_width(lv_obj_6, 1);
    lv_obj_set_height(lv_obj_6, 28);
    lv_obj_add_style(lv_obj_6, &st_divider, 0);
    
    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_4);
    lv_obj_set_x(lv_obj_7, 124);
    lv_obj_set_y(lv_obj_7, 12);
    lv_obj_set_width(lv_obj_7, 18);
    lv_obj_set_height(lv_obj_7, 18);
    lv_obj_add_style(lv_obj_7, &st_icon_purple, 0);
    
    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_7, 152);
    lv_obj_set_y(lv_label_7, 8);
    lv_label_set_text(lv_label_7, "Match");
    lv_obj_add_style(lv_label_7, &st_muted, 0);
    
    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_8, 152);
    lv_obj_set_y(lv_label_8, 24);
    lv_label_set_text(lv_label_8, "26%");
    lv_obj_add_style(lv_label_8, &st_purple_text, 0);
    
    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_8, 12);
    lv_obj_set_y(lv_obj_8, 130);
    lv_obj_set_width(lv_obj_8, 216);
    lv_obj_set_height(lv_obj_8, 92);
    lv_obj_add_style(lv_obj_8, &st_panel, 0);
    lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_9, 6);
    lv_obj_set_y(lv_obj_9, 24);
    lv_obj_set_width(lv_obj_9, 204);
    lv_obj_set_height(lv_obj_9, 18);
    lv_obj_add_style(lv_obj_9, &st_row_selected, 0);
    
    lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_10, 14);
    lv_obj_set_y(lv_obj_10, 9);
    lv_obj_set_width(lv_obj_10, 9);
    lv_obj_set_height(lv_obj_10, 9);
    lv_obj_add_style(lv_obj_10, &st_dot_green, 0);
    
    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_9, 34);
    lv_obj_set_y(lv_label_9, 4);
    lv_label_set_text(lv_label_9, "Python");
    lv_obj_add_style(lv_label_9, &st_text, 0);
    
    lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_11, 94);
    lv_obj_set_y(lv_obj_11, 10);
    lv_obj_set_width(lv_obj_11, 86);
    lv_obj_set_height(lv_obj_11, 5);
    lv_obj_add_style(lv_obj_11, &st_bar_track, 0);
    
    lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_12, 94);
    lv_obj_set_y(lv_obj_12, 10);
    lv_obj_set_width(lv_obj_12, 70);
    lv_obj_set_height(lv_obj_12, 5);
    lv_obj_add_style(lv_obj_12, &st_bar_green, 0);
    
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_10, 194);
    lv_obj_set_y(lv_label_10, 4);
    lv_label_set_text(lv_label_10, "8");
    lv_obj_add_style(lv_label_10, &st_text, 0);
    
    lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_13, 14);
    lv_obj_set_y(lv_obj_13, 29);
    lv_obj_set_width(lv_obj_13, 9);
    lv_obj_set_height(lv_obj_13, 9);
    lv_obj_add_style(lv_obj_13, &st_dot_blue, 0);
    
    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_11, 34);
    lv_obj_set_y(lv_label_11, 24);
    lv_label_set_text(lv_label_11, "TypeScript");
    lv_obj_add_style(lv_label_11, &st_blue_text, 0);
    
    lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_14, 116);
    lv_obj_set_y(lv_obj_14, 30);
    lv_obj_set_width(lv_obj_14, 64);
    lv_obj_set_height(lv_obj_14, 5);
    lv_obj_add_style(lv_obj_14, &st_bar_track, 0);
    
    lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_15, 116);
    lv_obj_set_y(lv_obj_15, 30);
    lv_obj_set_width(lv_obj_15, 50);
    lv_obj_set_height(lv_obj_15, 5);
    lv_obj_add_style(lv_obj_15, &st_bar_blue, 0);
    
    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_12, 184);
    lv_obj_set_y(lv_label_12, 24);
    lv_label_set_text(lv_label_12, "*");
    lv_obj_add_style(lv_label_12, &st_blue_text, 0);
    
    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_13, 194);
    lv_obj_set_y(lv_label_13, 24);
    lv_label_set_text(lv_label_13, "6");
    lv_obj_add_style(lv_label_13, &st_blue_text, 0);
    
    lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_16, 14);
    lv_obj_set_y(lv_obj_16, 49);
    lv_obj_set_width(lv_obj_16, 9);
    lv_obj_set_height(lv_obj_16, 9);
    lv_obj_add_style(lv_obj_16, &st_dot_orange, 0);
    
    lv_obj_t * lv_label_14 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_14, 34);
    lv_obj_set_y(lv_label_14, 44);
    lv_label_set_text(lv_label_14, "Java");
    lv_obj_add_style(lv_label_14, &st_text, 0);
    
    lv_obj_t * lv_obj_17 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_17, 94);
    lv_obj_set_y(lv_obj_17, 50);
    lv_obj_set_width(lv_obj_17, 86);
    lv_obj_set_height(lv_obj_17, 5);
    lv_obj_add_style(lv_obj_17, &st_bar_track, 0);
    
    lv_obj_t * lv_obj_18 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_18, 94);
    lv_obj_set_y(lv_obj_18, 50);
    lv_obj_set_width(lv_obj_18, 42);
    lv_obj_set_height(lv_obj_18, 5);
    lv_obj_add_style(lv_obj_18, &st_bar_orange, 0);
    
    lv_obj_t * lv_label_15 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_15, 194);
    lv_obj_set_y(lv_label_15, 44);
    lv_label_set_text(lv_label_15, "4");
    lv_obj_add_style(lv_label_15, &st_text, 0);
    
    lv_obj_t * lv_obj_19 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_19, 14);
    lv_obj_set_y(lv_obj_19, 69);
    lv_obj_set_width(lv_obj_19, 9);
    lv_obj_set_height(lv_obj_19, 9);
    lv_obj_add_style(lv_obj_19, &st_dot_purple, 0);
    
    lv_obj_t * lv_label_16 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_16, 34);
    lv_obj_set_y(lv_label_16, 64);
    lv_label_set_text(lv_label_16, "C#");
    lv_obj_add_style(lv_label_16, &st_text, 0);
    
    lv_obj_t * lv_obj_20 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_20, 94);
    lv_obj_set_y(lv_obj_20, 70);
    lv_obj_set_width(lv_obj_20, 86);
    lv_obj_set_height(lv_obj_20, 5);
    lv_obj_add_style(lv_obj_20, &st_bar_track, 0);
    
    lv_obj_t * lv_obj_21 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_21, 94);
    lv_obj_set_y(lv_obj_21, 70);
    lv_obj_set_width(lv_obj_21, 32);
    lv_obj_set_height(lv_obj_21, 5);
    lv_obj_add_style(lv_obj_21, &st_bar_purple, 0);
    
    lv_obj_t * lv_label_17 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_17, 194);
    lv_obj_set_y(lv_label_17, 64);
    lv_label_set_text(lv_label_17, "3");
    lv_obj_add_style(lv_label_17, &st_text, 0);
    
    lv_obj_t * lv_obj_22 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_22, 14);
    lv_obj_set_y(lv_obj_22, 84);
    lv_obj_set_width(lv_obj_22, 9);
    lv_obj_set_height(lv_obj_22, 9);
    lv_obj_add_style(lv_obj_22, &st_dot_rust, 0);
    
    lv_obj_t * lv_label_18 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_18, 34);
    lv_obj_set_y(lv_label_18, 79);
    lv_label_set_text(lv_label_18, "Rust");
    lv_obj_add_style(lv_label_18, &st_text, 0);
    
    lv_obj_t * lv_obj_23 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_23, 94);
    lv_obj_set_y(lv_obj_23, 85);
    lv_obj_set_width(lv_obj_23, 86);
    lv_obj_set_height(lv_obj_23, 5);
    lv_obj_add_style(lv_obj_23, &st_bar_track, 0);
    
    lv_obj_t * lv_obj_24 = lv_obj_create(lv_obj_8);
    lv_obj_set_x(lv_obj_24, 94);
    lv_obj_set_y(lv_obj_24, 85);
    lv_obj_set_width(lv_obj_24, 22);
    lv_obj_set_height(lv_obj_24, 5);
    lv_obj_add_style(lv_obj_24, &st_bar_rust, 0);
    
    lv_obj_t * lv_label_19 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_19, 194);
    lv_obj_set_y(lv_label_19, 79);
    lv_label_set_text(lv_label_19, "2");
    lv_obj_add_style(lv_label_19, &st_text, 0);
    
    lv_obj_t * lv_obj_25 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_25, 12);
    lv_obj_set_y(lv_obj_25, 232);
    lv_obj_set_width(lv_obj_25, 104);
    lv_obj_set_height(lv_obj_25, 36);
    lv_obj_add_style(lv_obj_25, &st_panel_soft, 0);
    lv_obj_t * lv_obj_26 = lv_obj_create(lv_obj_25);
    lv_obj_set_x(lv_obj_26, 12);
    lv_obj_set_y(lv_obj_26, 10);
    lv_obj_set_width(lv_obj_26, 16);
    lv_obj_set_height(lv_obj_26, 16);
    lv_obj_add_style(lv_obj_26, &st_icon_green, 0);
    
    lv_obj_t * lv_label_20 = lv_label_create(lv_obj_25);
    lv_obj_set_x(lv_label_20, 36);
    lv_obj_set_y(lv_label_20, 6);
    lv_label_set_text(lv_label_20, "Seen today");
    lv_obj_add_style(lv_label_20, &st_muted, 0);
    
    lv_obj_t * lv_label_21 = lv_label_create(lv_obj_25);
    lv_obj_set_x(lv_label_21, 36);
    lv_obj_set_y(lv_label_21, 21);
    lv_label_set_text(lv_label_21, "86");
    lv_obj_add_style(lv_label_21, &st_green_text, 0);
    
    lv_obj_t * lv_obj_27 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_27, 124);
    lv_obj_set_y(lv_obj_27, 232);
    lv_obj_set_width(lv_obj_27, 104);
    lv_obj_set_height(lv_obj_27, 36);
    lv_obj_add_style(lv_obj_27, &st_panel_soft, 0);
    lv_obj_t * lv_obj_28 = lv_obj_create(lv_obj_27);
    lv_obj_set_x(lv_obj_28, 12);
    lv_obj_set_y(lv_obj_28, 10);
    lv_obj_set_width(lv_obj_28, 16);
    lv_obj_set_height(lv_obj_28, 16);
    lv_obj_add_style(lv_obj_28, &st_icon_purple, 0);
    
    lv_obj_t * lv_label_22 = lv_label_create(lv_obj_27);
    lv_obj_set_x(lv_label_22, 36);
    lv_obj_set_y(lv_label_22, 6);
    lv_label_set_text(lv_label_22, "Seen 7d");
    lv_obj_add_style(lv_label_22, &st_muted, 0);
    
    lv_obj_t * lv_label_23 = lv_label_create(lv_obj_27);
    lv_obj_set_x(lv_label_23, 36);
    lv_obj_set_y(lv_label_23, 21);
    lv_label_set_text(lv_label_23, "312");
    lv_obj_add_style(lv_label_23, &st_purple_text, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

