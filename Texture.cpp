#include "Texture.h"

void Texture::set_dim(int w, int h)
{
    width = w;
    height = h;
}

void Texture::print_dim()
{
    std::cout<<TAG << "Width:  " << width  << std::endl;
    std::cout<<TAG << "Height: "<< height << std::endl;
}