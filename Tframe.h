#ifndef TFRAME_H
#define TFRAME_H

#include <ncurses.h> 
#include <string>
#include <vector>
#include <memory>
#include<iostream>

#include "Tobject.h"

class Tframe
{
    public:
        void draw();
        void bind(Tobject &);
    
    private:
        Tobject * objects;
};

#endif /* TFRAME_H */