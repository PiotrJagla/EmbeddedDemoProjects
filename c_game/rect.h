#ifndef RECT_H
#define RECT_H
#include <raylib.h>

struct rect{ 
    float x;
    float y;
    float width;
    float height;
};

void DrawRect(const struct rect* r, Color c);

#endif