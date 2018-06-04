#include <iostream>
#include <ncurses.h> 
#include <string>
class Tengine {

    private:
        int width=0, height=0;
        const char* TAG = "TENGINE | ";
    
    public:
        void init();
        void end();

        void set_dim(int, int);
        void print_dim();

        void print(const char* text, int, int);
};