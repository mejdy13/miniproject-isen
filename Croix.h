#ifndef CROIX_H
#define CROIX_H

#include "Figure.h"

class Croix : public Figure
{

public:
    //variables
    int x;
    int y;
    int thickness;
    int color;

    //constructeurs
    Croix(int i_x, int i_y, int i_thickness, int i_color, int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig);
    Croix(int i_color, int i_D_width, int i_D_height, std::vector<char> i_fig);

    //destructeur
    ~Croix(){};

    //méthode
    std::vector<char> draw();
};

#endif