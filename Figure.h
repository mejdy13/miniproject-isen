#ifndef FIGURE_H
#define FIGURE_H
#include <cstdlib>
#include <iostream>
#include <vector>
class Figure
{
public:
    //variables
    int const D_width;
    int const D_height;
    int width;
    int height;
    std::vector<char> fig;

    //méthodes
    std::vector<char> getFig() const;
    void setPoint(int x, int y);
    virtual std::vector<char> draw() = 0;

    //destructeur
    ~Figure() {}

protected:
    //Constructeurs protégés
    Figure(int i_D_width, int i_D_height, int i_width, int i_height, std::vector<char> i_fig);
    Figure(int i_D_width, int i_D_height, std::vector<char> i_fig);
};
#endif