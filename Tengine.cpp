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