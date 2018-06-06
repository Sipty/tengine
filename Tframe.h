#include <ncurses.h> 
#include <string>

class Tframe 
{
    public:
        void set_dim(int, int);
        void print_dim();

    private:
        const char* TAG = "TENGINE | Frame";

        int width=0;
        int height=0;
        void print(const char* text, int, int);
};