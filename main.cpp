#include <iostream>
#include "Tengine.h"


// ncurses play session
#include <unistd.h>



int main ()
{
    Tengine eng;
    eng.init();


    int timer = 1;
    while(1)
    {
        clear(); // clear previously-printed characters
        mvprintw(0,0,("Penis" + std::to_string(timer)).c_str());
        timer++;
        refresh();
    }

    eng.end();  
}