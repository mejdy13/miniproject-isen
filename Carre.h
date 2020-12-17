#ifndef CARRE_H
#define CARRE_H
#include "Figure.h"

class Carre : public Figure
{
public:
    //variables
    int x;
    int y;
    int color;

    // constructeurs
    Carre(int x, int y, int color, int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig);
    Carre(int i_color, int i_D_width, int i_D_height, std::vector<char> i_fig);

    //destructeur
    ~Carre();

    //méthode
    std::vector<char> draw();
};

#endif