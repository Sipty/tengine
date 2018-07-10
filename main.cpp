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
    // // Tframe ball;   
    // // ball.pos(bx,by);
    // // ball.art("3==D");
    int timer = 1;

    Tframe frame;
    Tobject obj;
    obj.pos(0,0);
    frame.bind(obj);



    obj.art("3==D");

    while(timer < TTL)
    {
        clear(); // clear previously-printed characters
        bx++;
        
        obj.pos(bx, by);
        frame.draw();
        // obj->pos(by, by);

        // mvprintw(0,by,("Penis" + std::to_string(timer)).c_str());
        timer++;
        refresh();
        usleep(DELAY);
    }

    eng.end();  
}