#include <iostream>




class Texture {

    private:
        int width=0, height=0;
        const char* TAG = "TENGINE | ";
    
    public:
        void set_dim(int, int);
        void print_dim();
};