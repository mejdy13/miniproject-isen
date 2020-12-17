#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Figure.h"

class Rectangle : public Figure
{
public:
    //variables
    int x;
    int y;
    int color;

    //constrcteurs
    Rectangle(int x, int y, int color, int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig);
    Rectangle(int i_color, int i_D_width, int i_D_height, std::vector<char> i_fig);

    //destructeurs
    ~Rectangle() {}

    //méthode
    std::vector<char> draw();
};

#endif