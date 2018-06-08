#include "Tframe.h"


/*
    Sets the dimentions of the frame.
*/
void Tframe::dim(int w, int h)
{
    this->w = w;
    this->h = h;
}

/*
    Sets the position of the object;

    This will have impact the next time the frame is drawn.
*/
void Tframe::pos(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Tframe::print_dim()
{
    std::string out =  "Width:  " + std::to_string(w) + "\n" +
                       "Height: " + std::to_string(h);

    print(out.c_str(), 0, 0);
}

void Tframe::print_pos()
{
    std::string out =  "Position:  (" + std::to_string(x) + "," 
                                      + std::to_string(y) + ")";

    print(out.c_str(), 0, 0);
}

/*
    text -- print text
    x,y - coordinates, where printing starts
*/
void Tframe::print(const char* text, int x=0, int y=0)
{
    mvprintw(x, y, text);
}

