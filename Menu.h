#ifndef MENU_H
#define MENU_H

#include "Drawing.h"

//variables globales
const int width = 500;
const int height = 400;

class Menu
{

public:
    // constructeur
    Menu() {}

    // destructeur
    ~Menu() {}

    // méthodes
    void run();
    void clearConsole();
    bool isFull();
};
#endif