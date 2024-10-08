// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_mainMenuScreen
void ui_mainMenuScreen_screen_init(void);
extern lv_obj_t * ui_mainMenuScreen;
void ui_event_settingsButton(lv_event_t * e);
extern lv_obj_t * ui_settingsButton;
extern lv_obj_t * ui_settingsButtonLabel;
void ui_event_ConfigureButton(lv_event_t * e);
extern lv_obj_t * ui_ConfigureButton;
extern lv_obj_t * ui_configureButtonLabel;
void ui_event_onButton(lv_event_t * e);
extern lv_obj_t * ui_onButton;
extern lv_obj_t * ui_onButtonLabel;
void ui_event_offButton(lv_event_t * e);
extern lv_obj_t * ui_offButton;
extern lv_obj_t * ui_offButtonLabel;
// SCREEN: ui_configureScreen
void ui_configureScreen_screen_init(void);
extern lv_obj_t * ui_configureScreen;
extern lv_obj_t * ui_networkTimePanel;
extern lv_obj_t * ui_networkTimeSwitch;
extern lv_obj_t * ui_networkTimeLabel;
extern lv_obj_t * ui_dimmerPanel;
extern lv_obj_t * ui_dimmerSwitch;
extern lv_obj_t * ui_dimmerLabel;
extern lv_obj_t * ui_colorPanel;
extern lv_obj_t * ui_colorLabel;
extern lv_obj_t * ui_redSlider;
extern lv_obj_t * ui_greenSlider;
extern lv_obj_t * ui_blueSlider;
void ui_event_configureBackButton(lv_event_t * e);
extern lv_obj_t * ui_configureBackButton;
extern lv_obj_t * ui_configureBackButtonLabel;
// SCREEN: ui_settingsScreen
void ui_settingsScreen_screen_init(void);
extern lv_obj_t * ui_settingsScreen;
void ui_event_settingsBackButton(lv_event_t * e);
extern lv_obj_t * ui_settingsBackButton;
extern lv_obj_t * ui_settingsBackButtonLabel;
extern lv_obj_t * ui_sendStatisticsPanel;
extern lv_obj_t * ui_sendStatisticsSwitch;
extern lv_obj_t * ui_sendStatisticsLabel;
extern lv_obj_t * ui____initial_actions0;








void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
