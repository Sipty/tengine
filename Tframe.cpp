#include "Tframe.h"

void Tframe::set_dim(int w, int h)
{
    width = w;
    height = h;
}

void Tframe::print_dim()
{
    std::string out =  "Width:  " + std::to_string(width) + "\n" +
                       "Height: " + std::to_string(height);

    print(out.c_str(), 0, 0);

    refresh();

}

/*
    text -- print text
    x    -- x coordinate
    y    -- y coordinate
*/
void Tframe::print(const char* text, int x=0, int y=0)
{
    mvprintw(x, y, text);
}