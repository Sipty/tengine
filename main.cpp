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

    // this is to be extracted code
    int bx=0, by=0;
    Tframe ball;   
    ball.pos(bx,by);
    ball.art("3==D");
    int timer = 1;
    
    while(timer < TTL)
    {
        clear(); // clear previously-printed characters
        ;
        by++;
        ball.pos(bx, by);
        ball.draw();
        // mvprintw(0,0,("Penis" + std::to_string(timer)).c_str());
        timer++;
        refresh();
        usleep(DELAY);
    }

    eng.end();  
}