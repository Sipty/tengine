#include "Tframe.h"

/*
    Draws the art asset, according to the dimentions set
*/
void Tframe::draw()
{
    // draw the objects
    // mvprintw(x, y, text);

    // GO THROUGH THE OBJECTS AND DRAW THEM
    for(int i=0; i<objects.size(); i++)
    {
        mvprintw(objects.at(i)->y, objects.at(i)->x,
            objects.at(i)->art_asset.c_str());    
    }
}

/*
    Binds an object to the frame
*/
void Tframe::bind(Tobject &obj)
{
    objects.push_back(&obj);
}