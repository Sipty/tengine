#include <ncurses.h> 
#include <string>

class Tframe
{
    public:
        void pos(int x, int y);
        void dim(int w, int h);
        
        void art(std::string);
        void draw();
        void print_dim();
        void print_pos();

    private:
        const char* TAG = "TENGINE | Frame";

        int w=0;
        int h=0;
        int x = 0;
        int y = 0;
        std::string art_asset = "";
        void print(const char* text, int, int);
};