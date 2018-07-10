#include <iostream>
// tengine includes
#include "Tengine.h"
#include "Tframe.h"

// ncurses play session
#include <unistd.h>

#define DELAY 30000 // sleepy times delay
#define TTL 1000    // time to live
int main ()
{
    Tengine eng;
    eng.init();

    Tframe frame;
    Tobject up, down, left, right;

    int bx= eng.get_width()/2;
    int by= eng.get_height()/2;

    up.pos(bx,by);
    down.pos(bx,by);
    left.pos(bx,by);
    right.pos(bx,by);

    frame.bind(up);
    frame.bind(down);
    frame.bind(left);
    frame.bind(right);

    up.art("\n^^\n||\n||\nMM");
    down.art("\nWW\n||\n||\n^^");
    
    right.art("3==D");
    left.art("D==3");
    
    
    int timer;
    while(timer < TTL)
    {
        clear();
        
        right.move_right();
        left.move_left();
        up.move_up();
        down.move_down();
        
        frame.draw();
        
        refresh();
        usleep(DELAY);

        timer++;
    }

    eng.end();  
}