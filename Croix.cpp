#include "Croix.h"

//Constructeurs
Croix::Croix(int i_x, int i_y, int i_thickness, int i_color, int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig)
    : Figure(i_D_width, i_D_height, i_width, i_height, i_fig), thickness(i_thickness), x(i_x), y(i_y), color(i_color) {}

Croix::Croix(int i_color, int i_D_width, int i_D_height, std::vector<char> i_fig)
    : Figure(i_D_width, i_D_height, i_fig), color(i_color), x(0), y(0)
{
    thickness = (width > height) ? height / 4 : width / 4; // On veut la plus petite valeur de longueur ou largeur divisée par 4
}
// Méthode permettant de tracer une croix
std::vector<char> Croix::draw()
{
    std::vector<char> o_fig = getFig();
    int m_x = (float)(width) / 2.0 + x - (float)thickness / 2.0;
    int m_y = (float)(height) / 2.0 + y - (float)thickness / 2.0;
    for (int i = y; i < y + height; i++)
    {
        for (int j = x; j < x + width; j++)
        {
            if ((j >= m_x && j <= m_x + thickness) || (i >= m_y && i <= m_y + thickness)) // test de la position dans le carré
                o_fig[i * D_width + j] = color;
        }
    }
    return o_fig;
}