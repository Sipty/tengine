#include <iostream>
#include "Texture.h"

int main ()
{
    std::cout<<"Hello world. I'm tengine! :-D" <<std::endl;

    Texture tex;

    // test run
    tex.set_dim(10, 10);
    tex.print_dim();

}