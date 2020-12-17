#ifndef SEGMENT_H
#define SEGMENT_H
#include "Figure.h"

class Segment : public Figure
{
public:
    //variables
    int x;
    int y;
    int thickness;
    bool horizontal;
    int color;

    //constructeurs
    Segment(int i_x, int i_y, int i_thickness, bool i_horizontal, int color, int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig);
    Segment(bool i_horizontal, int i_color, int i_D_width, int i_D_height, std::vector<char> i_fig);

    //destructeurs
    ~Segment() {}

    //méthode
    std::vector<char> draw();
};

#endif