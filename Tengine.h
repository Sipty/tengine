#ifndef TENGINE_H
#define TENGINE_H

#include <iostream>
#include <ncurses.h> 
#include <string>

class Tengine 
{
    public:
        void init();
        void end();
        int get_width();
        int get_height();
};

#endif /* TENGINE */