#include "Tframe.h"

/*
    Draws the art asset, according to the dimentions set
*/
void Tframe::draw()
{
    // draw the objects
    // mvprintw(x, y, text);

    // GO THROUGH THE OBJECTS AND DRAW THEM
    
    mvprintw(objects->y, objects->x, objects->art_asset.c_str());    
}

/*
    Binds an object to the frame
*/
void Tframe::bind(Tobject &obj)
{
    objects = &obj;
}