#pragma once

int PL_get_screen_width();
int PL_get_screen_height();

void PL_begin_draw();
void PL_end_draw();

void PL_set_font(const char* path, int font_size);
void PL_use_default_font();
void PL_draw_text(char* value, size_t len, int x, int y);

void PL_log(const char* message, ...);
