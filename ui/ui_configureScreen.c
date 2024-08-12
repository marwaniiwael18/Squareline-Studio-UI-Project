// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
extern lv_font_t lv_font_montserrat_18;
void ui_configureScreen_screen_init(void)
{
    ui_configureScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_configureScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_networkTimePanel = lv_obj_create(ui_configureScreen);
    lv_obj_set_height(ui_networkTimePanel, 35);
    lv_obj_set_width(ui_networkTimePanel, lv_pct(90));
    lv_obj_set_x(ui_networkTimePanel, -1);
    lv_obj_set_y(ui_networkTimePanel, -73);
    lv_obj_set_align(ui_networkTimePanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_networkTimePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_networkTimePanel, lv_color_hex(0xFEFEFE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_networkTimePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_networkTimePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_networkTimePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_networkTimePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_networkTimePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_networkTimePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_networkTimeSwitch = lv_switch_create(ui_networkTimePanel);
    lv_obj_set_width(ui_networkTimeSwitch, 45);
    lv_obj_set_height(ui_networkTimeSwitch, 20);
    lv_obj_set_y(ui_networkTimeSwitch, 0);
    lv_obj_set_x(ui_networkTimeSwitch, lv_pct(-45));
    lv_obj_set_align(ui_networkTimeSwitch, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_networkTimeSwitch, LV_STATE_CHECKED);       /// States


    ui_networkTimeLabel = lv_label_create(ui_networkTimePanel);
    lv_obj_set_width(ui_networkTimeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_networkTimeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_y(ui_networkTimeLabel, 0);
    lv_obj_set_x(ui_networkTimeLabel, lv_pct(10));
    lv_obj_set_align(ui_networkTimeLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_networkTimeLabel, "Update time using NTP");
    lv_obj_set_style_text_font(ui_networkTimeLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dimmerPanel = lv_obj_create(ui_configureScreen);
    lv_obj_set_height(ui_dimmerPanel, 35);
    lv_obj_set_width(ui_dimmerPanel, lv_pct(90));
    lv_obj_set_x(ui_dimmerPanel, 0);
    lv_obj_set_y(ui_dimmerPanel, -44);
    lv_obj_set_align(ui_dimmerPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dimmerPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_dimmerPanel, lv_color_hex(0xFEFEFE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dimmerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_dimmerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_dimmerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_dimmerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_dimmerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_dimmerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dimmerSwitch = lv_switch_create(ui_dimmerPanel);
    lv_obj_set_width(ui_dimmerSwitch, 45);
    lv_obj_set_height(ui_dimmerSwitch, 20);
    lv_obj_set_y(ui_dimmerSwitch, 0);
    lv_obj_set_x(ui_dimmerSwitch, lv_pct(-45));
    lv_obj_set_align(ui_dimmerSwitch, LV_ALIGN_CENTER);


    ui_dimmerLabel = lv_label_create(ui_dimmerPanel);
    lv_obj_set_width(ui_dimmerLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dimmerLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_y(ui_dimmerLabel, 0);
    lv_obj_set_x(ui_dimmerLabel, lv_pct(10));
    lv_obj_set_align(ui_dimmerLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dimmerLabel, "Use night-time dimmer");
    lv_obj_set_style_text_font(ui_dimmerLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_colorPanel = lv_obj_create(ui_configureScreen);
    lv_obj_set_height(ui_colorPanel, 100);
    lv_obj_set_width(ui_colorPanel, lv_pct(90));
    lv_obj_set_x(ui_colorPanel, 0);
    lv_obj_set_y(ui_colorPanel, 15);
    lv_obj_set_align(ui_colorPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_colorPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_colorPanel, lv_color_hex(0xFEFEFE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_colorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_colorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_colorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_colorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_colorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_colorLabel = lv_label_create(ui_colorPanel);
    lv_obj_set_width(ui_colorLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_colorLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_y(ui_colorLabel, -40);
    lv_obj_set_x(ui_colorLabel, lv_pct(-40));
    lv_obj_set_align(ui_colorLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_colorLabel, "LED Color");
    lv_obj_set_style_text_font(ui_colorLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_redSlider = lv_slider_create(ui_colorPanel);
    lv_slider_set_range(ui_redSlider, 0, 255);
    lv_slider_set_value(ui_redSlider, 125, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_redSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_redSlider, 0, LV_ANIM_OFF);
    lv_obj_set_height(ui_redSlider, 7);
    lv_obj_set_width(ui_redSlider, lv_pct(100));
    lv_obj_set_x(ui_redSlider, 0);
    lv_obj_set_y(ui_redSlider, -15);
    lv_obj_set_align(ui_redSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_redSlider, lv_color_hex(0xC2C2C2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_redSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_redSlider, lv_color_hex(0xD42121), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_redSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_redSlider, lv_color_hex(0x646464), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_redSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_greenSlider = lv_slider_create(ui_colorPanel);
    lv_slider_set_range(ui_greenSlider, 0, 255);
    lv_slider_set_value(ui_greenSlider, 173, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_greenSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_greenSlider, 0, LV_ANIM_OFF);
    lv_obj_set_height(ui_greenSlider, 7);
    lv_obj_set_width(ui_greenSlider, lv_pct(100));
    lv_obj_set_x(ui_greenSlider, 0);
    lv_obj_set_y(ui_greenSlider, 7);
    lv_obj_set_align(ui_greenSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_greenSlider, lv_color_hex(0xC2C2C2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_greenSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_greenSlider, lv_color_hex(0x47B522), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_greenSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_greenSlider, lv_color_hex(0x646464), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_greenSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_blueSlider = lv_slider_create(ui_colorPanel);
    lv_slider_set_range(ui_blueSlider, 0, 255);
    lv_slider_set_value(ui_blueSlider, 55, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_blueSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_blueSlider, 0, LV_ANIM_OFF);
    lv_obj_set_height(ui_blueSlider, 7);
    lv_obj_set_width(ui_blueSlider, lv_pct(100));
    lv_obj_set_x(ui_blueSlider, 0);
    lv_obj_set_y(ui_blueSlider, 29);
    lv_obj_set_align(ui_blueSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_blueSlider, lv_color_hex(0xC2C2C2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blueSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_blueSlider, lv_color_hex(0x646464), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blueSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_configureBackButton = lv_btn_create(ui_configureScreen);
    lv_obj_set_width(ui_configureBackButton, 91);
    lv_obj_set_height(ui_configureBackButton, 23);
    lv_obj_set_x(ui_configureBackButton, -3);
    lv_obj_set_y(ui_configureBackButton, lv_pct(38));
    lv_obj_set_align(ui_configureBackButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_configureBackButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_configureBackButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_configureBackButton, lv_color_hex(0x848484), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_configureBackButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_configureBackButtonLabel = lv_label_create(ui_configureBackButton);
    lv_obj_set_width(ui_configureBackButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_configureBackButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_configureBackButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_configureBackButtonLabel, "Back");

    lv_obj_add_event_cb(ui_configureBackButton, ui_event_configureBackButton, LV_EVENT_ALL, NULL);

}