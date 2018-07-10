#include "Tobject.h"

/*
    Sets the dimentions of the frame.
*/
void Tobject::dim(int w, int h)
{
    this->w = w;
    this->h = h;
}

/*
    Sets the position of the object;

    This will have impact the next time the frame is drawn.
*/
void Tobject::pos(int x, int y)
{
    this->x = x;
    this->y = y;
}

/*
    // TODO: check if asset points at an address or is manually entered
    asset - manually added art asset for frame
*/
void Tobject::art(std::string asset)
{
    this->art_asset = asset;
}