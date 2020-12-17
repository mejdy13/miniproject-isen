#ifndef DRAWING_H
#define DRAWING_H

#include <vector>
#include <iostream>
#include <string>

#include "Figure.h"
#include "Carre.h"
#include "Croix.h"
#include "Rectangle.h"
#include "Segment.h"

class Drawing
{
public:
  std::vector<Figure *> listToDraw;

  Drawing(const int width, const int height);
  Drawing() : width(0), height(0){};
  ~Drawing();

  //accesseurs et mutateurs
  int getWidth() { return width; }
  int getHeight() { return height; }
  void setImage(std::vector<char> i_image) { image = i_image; }
  std::vector<char> getImage() { return image; }

  //méthodes
  void save(std::string filename);
  void drawList();

private:
  const int width;
  const int height;
  std::vector<char> image;
  void clearImage();
  void createTestImage();
};

#endif /* DRAWIN_H */