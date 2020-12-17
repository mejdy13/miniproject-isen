#include "Menu.h"

void Menu::run()
{
    Drawing draw(width, height); //création de l'espace de dessin
    bool boucle = true;
    clearConsole();
    while (boucle)
    {
        int n = 0;

        std::cout << "  Menu" << std::endl;
        std::cout << "1 - Creer une figure" << std::endl;
        std::cout << "2 - Dessiner les figures" << std::endl;
        std::cout << "3 - Quitter" << std::endl;
        std::cout << "Saisir : ";

        std::cin >> n;

        clearConsole();
        switch (n)
        {
        case 1:
        {
            int n2 = 0;
            std::cout << "  Liste des figures" << std::endl;
            std::cout << "1- Carre" << std::endl;
            std::cout << "2- Rectangle" << std::endl;
            std::cout << "3- Segment" << std::endl;
            std::cout << "4- Croix" << std::endl;
            std::cout << "5- Retour" << std::endl;
            std::cout << "Saisir : ";

            std::cin >> n2;
            int w = 0, h = 0, c = 0, x = 0, y = 0, e = 0;

            clearConsole();
            if (n2 >= 1 && n2 <= 4)
            {
                std::cout << "Saisir Couleur : ";
                std::cin >> c;
            }
            switch (n2)
            {
            case 1:
                if (isFull())
                {
                    Carre *carre = new Carre(c, width, height, draw.getImage()); //création d'instance d'un carré
                    draw.listToDraw.push_back(carre);                            //ajout à la liste à dessiner
                }

                else
                {
                    std::cout << "Saisir longueur : ";
                    std::cin >> w;
                    std::cout << std::endl
                              << "Saisir Largeur : ";
                    std::cin >> h;
                    std::cout << std::endl
                              << "Saisir x : ";
                    std::cin >> x;
                    std::cout << std::endl
                              << "Saisir y : ";
                    std::cin >> y;

                    Carre *carre = new Carre(x, y, c, width, height, w, h, draw.getImage());
                    draw.listToDraw.push_back(carre);
                }

                break;
            case 2:
                if (isFull())
                {
                    Rectangle *rect = new Rectangle(c, width, height, draw.getImage());
                    draw.listToDraw.push_back(rect);
                }

                else
                {
                    std::cout << "Saisir longueur : ";
                    std::cin >> w;
                    std::cout << std::endl
                              << "Saisir Largeur : ";
                    std::cin >> h;
                    std::cout << std::endl
                              << "Saisir x : ";
                    std::cin >> x;
                    std::cout << std::endl
                              << "Saisir y : ";
                    std::cin >> y;

                    Rectangle *rect = new Rectangle(x, y, c, width, height, w, h, draw.getImage());
                    draw.listToDraw.push_back(rect);
                }
                break;
            case 3:
                if (isFull())
                {
                    int ho = 0;
                    std::cout << "Sens :" << std::endl;
                    std::cout << "1 - Horizontal" << std::endl;
                    std::cout << "2 - Vertical" << std::endl;
                    std::cout << "Saisir : ";
                    std::cin >> ho;
                    bool horizontal = (ho == 1) ? true : false;
                    Segment *seg = new Segment(horizontal, c, width, height, draw.getImage());
                    draw.listToDraw.push_back(seg);
                }

                else
                {
                    int hu = 0;
                    std::cout << "Sens :" << std::endl;
                    std::cout << "1 - Horizontal" << std::endl;
                    std::cout << "2 - Vertical" << std::endl;
                    std::cout << "Saisir : ";
                    std::cin >> hu;
                    bool horizontal = (hu == 1) ? true : false;
                    std::cout << std::endl
                              << "Saisir l'epaisseur du trait : ";
                    std::cin >> e;
                    std::cout << std::endl
                              << "Saisir longueur : ";
                    std::cin >> w;
                    std::cout << std::endl
                              << "Saisir Largeur : ";
                    std::cin >> h;
                    std::cout << std::endl
                              << "Saisir x : ";
                    std::cin >> x;
                    std::cout << std::endl
                              << "Saisir y : ";
                    std::cin >> y;

                    Segment *seg = new Segment(x, y, e, horizontal, c, width, height, w, h, draw.getImage());
                    draw.listToDraw.push_back(seg);
                }
                break;
            case 4:
                if (isFull())
                {

                    Croix *croix = new Croix(c, width, height, draw.getImage());
                    draw.listToDraw.push_back(croix);
                }

                else
                {
                    std::cout << std::endl
                              << "Saisir l'epaisseur du trait : ";
                    std::cin >> e;
                    std::cout << std::endl
                              << "Saisir longueur : ";
                    std::cin >> w;
                    std::cout << std::endl
                              << "Saisir Largeur : ";
                    std::cin >> h;
                    std::cout << std::endl
                              << "Saisir x : ";
                    std::cin >> x;
                    std::cout << std::endl
                              << "Saisir y : ";
                    std::cin >> y;

                    Croix *croix = new Croix(x, y, e, c, width, height, w, h, draw.getImage());
                    draw.listToDraw.push_back(croix);
                }
                break;
            case 5:
                break;
            default:
                break;
            }
        }
        break;
        case 2:
            draw.save("test_draw.bmp"); // appel de la méthode save permettant de tracer la liste
            break;
        case 3:
            boucle = false;
            break;
        default:

            break;
        }
        clearConsole();
    }
}

void Menu::clearConsole()
{
    for (int i = 0; i < 50; i++)
        std::cout << std::endl;
}

bool Menu::isFull()
{
    int n;
    clearConsole();
    std::cout << "Mettre la figure au format de l'image ?" << std::endl;
    std::cout << "1 - Oui" << std::endl;
    std::cout << "2 - Non" << std::endl;

    std::cin >> n;
    return (n == 2) ? false : true;
}