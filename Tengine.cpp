#include "Tengine.h"

/*
    Create the window and set basic enviromnemntal setup vars
*/
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

int Tengine::get_width()
{
    return getmaxx(stdscr);
}

int Tengine::get_height()
{
    return getmaxy(stdscr);
}