SET(SOURCES ui_mainMenuScreen.c
    ui_configureScreen.c
    ui_settingsScreen.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.c)

add_library(ui ${SOURCES})
