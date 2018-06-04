#include <iostream>
#include "Tengine.h"


// ncurses play session
#include <unistd.h>



int main ()
{
    std::cout<<"Hello world. I'm tengine! :-D" <<std::endl;

    Tengine eng;

    eng.init();


    eng.set_dim(10, 10);
    eng.print_dim();


    sleep(1);
    eng.end();




    /* end play sesh here */

    // // test run
    // Texture tex;
    // tex.set_dim(10, 10);
    // tex.print_dim();

}