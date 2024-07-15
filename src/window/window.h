#pragma once
#include <Windows.h>
#include <stdint.h>

//global defs

//typedefs
typedef uint32_t PIXEL;

//funtion defs
//window.cpp
//window creation/deletion
int create_window(const char* name, int width, int height);
void window_remove();

//window update
void window_update();
void window_clear();

//buffer modification
void get_dims(int* width, int* height);
bool get_pixel(int x, int y, PIXEL* color);
bool set_pixel(int x, int y, PIXEL color);
void draw_lock();
void draw_unlock();
void draw_line(int x0, int y0, int x1, int y1, PIXEL color);

//window sync
void window_sync_begin();
void window_sync_end(int fps_cap, bool print_fps);