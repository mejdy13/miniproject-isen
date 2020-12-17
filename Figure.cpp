#include "Figure.h"

//constructeurs
Figure::Figure(int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig)
    : D_width(i_D_width), D_height(i_D_height), width(i_width), height(i_height)
{
    fig = i_fig;
}

Figure::Figure(int i_D_width, int i_D_height, std::vector<char> i_fig)
    : D_width(i_D_width), D_height(i_D_height), width(i_D_width), height(i_D_height), fig(i_fig) {}

//méthodes
void Figure::setPoint(int x, int y)
{
    if (x < width && y < height && x >= 0 && y >= 0) // Met le pixel visé à la couleur désirée
        fig[x * width + y] = 255;
}

std::vector<char> Figure::getFig() const
{
    return fig;
}