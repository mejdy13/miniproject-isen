#include "Segment.h"

//constructeurs
Segment::Segment(int i_x, int i_y, int i_thickness, bool i_horizontal, int i_color, int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig)
    : Figure(i_D_width, i_D_height, i_width, i_height, i_fig), thickness(i_thickness), x(i_x), y(i_y), color(i_color) {}

Segment::Segment(bool i_horizontal, int i_color, int i_D_width, int i_D_height, std::vector<char> i_fig)
    : Figure(i_D_width, i_D_height, i_fig), horizontal(i_horizontal), color(i_color), x(0), y(0)
{
    thickness = (width > height) ? height / 10 : width / 10;
}

std::vector<char> Segment::draw()
{
    std::vector<char> o_fig = getFig();
    for (int i = y; i < y + height; i++)
    {
        for (int j = x; j < x + width; j++)
        {
            if (horizontal)
            {
                if (j < D_width && i < D_height && i >= 0 && j >= 0 && i < y + thickness) // vérification de la faisabilité du segment
                    o_fig[i * D_width + j] = color;
            }
            else
            {
                if (i < D_width && j < D_height && j >= 0 && i >= 0 && i < x + thickness)
                    o_fig[i * D_width + j] = color;
            }
        }
    }
    return o_fig;
}