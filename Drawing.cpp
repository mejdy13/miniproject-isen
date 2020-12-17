#include "Drawing.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <C:\Users\gaut9\Desktop\miniproject-isen-master2\extern\stb\stb_image_write.h>
#include <stdexcept>

//            _    _  _                     _    _           _
//  ___  _ _ | |_ | |<_> ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| | || . \| || |/ | ' | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/`___||___/|_||_|\_|_. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

Drawing::Drawing(const int width, const int height)
    : width(width), height(height)
{
  image.resize(width * height);
}

Drawing::~Drawing() {}

/* Save image to file "filename" */
void Drawing::save(std::string filename)
{

  if (filename.substr(filename.find_last_of(".") + 1) != "bmp")
  {
    throw std::runtime_error(
        "Drawing ne supporte que l'enregistrement d'images au format bmp");
  }

  //appel de la fonction qui trace la liste d'objets
  drawList();
  stbi_write_bmp(filename.c_str(), width, height, 1, image.data());
  clearImage();
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

/* Set every point of the image to 0 */
void Drawing::clearImage()
{
  for (std::vector<char>::iterator it = image.begin(); it != image.end();
       it++)
  {
    *it = 0;
  }
}

/* Set image to test */
void Drawing::createTestImage()
{
  for (int j = 0; j < height; j++)
  {
    for (int i = 0; i < width; i++)
    {
      image[j * width + i] = (i + 2 * j) % 256;
    }
  }
}

//Méthode permettant de tracer tous les objets contenus dans le vecteur listToDraw
void Drawing::drawList()
{
  for (int i = 0; i < listToDraw.size(); i++)
  {
    listToDraw[i]->fig = image;
    setImage(listToDraw[i]->draw());
  }
}
