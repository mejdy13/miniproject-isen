#include "Carre.h"

//constructeurs
Carre::Carre(int i_x, int i_y, int i_color, int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig)
    : Figure(i_D_width, i_D_height, i_width, i_height, i_fig), x(i_x), y(i_y), color(i_color) {}

Carre::Carre(int i_color, int i_D_width, int i_D_height, std::vector<char> i_fig)
    : Figure(i_D_width, i_D_height, i_fig), color(i_color), x(0), y(0) {}

//méthode permettant de tracer un carré
std::vector<char> Carre::draw()
{

    std::vector<char> o_fig = getFig();

    for (int i = y; i < y + height; i++)
    {
        for (int j = x; j < x + width; j++)
        {
            // Vérification contenu dans la zone de dessin + vérification hauteur = largeur pour faire un carré
            if (j < D_width && i < D_height && i >= 0 && j >= 0 && i < D_width && j < D_height && i < width + y && j < height + x)
                o_fig[i * D_width + j] = color;
        }
    }
    return o_fig;
}