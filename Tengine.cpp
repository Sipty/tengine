#include "Tengine.h"

void Tengine::init()
{
    initscr(); // Initialise the window
    noecho(); // Don't echo any keypresses
    curs_set(FALSE); // Don't display a cursor
}

void Tengine::end()
{
    endwin();   // Restore terminal
}

void Tengine::set_dim(int w, int h)
{
    width = w;
    height = h;
}

void Tengine::print_dim()
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
void Tengine::print(const char* text, int x=0, int y=0)
{
    mvprintw(x, y, text);
}