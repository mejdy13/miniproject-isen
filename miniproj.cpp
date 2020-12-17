

#include "Menu.h"

int main(int argc, char **argv)
{

  Menu test; 
  test.run();

  /*
  
Commandes de test utilisées durant le développement permettant de tester chaque classe une par une. 

  Drawing draw(width, height);
  
  Carre *c = new Carre(0,0,100,width,height,200,250,draw.getImage());
  Carre *c2 = new Carre(210,0,100,width,height,200,250,draw.getImage());
  Croix *croix1 = new Croix(200,200,10,200,width,height,100,100,draw.getImage());
  Croix *croix2 = new Croix(0,0,10,200,width,height,100,100,draw.getImage());
  draw.listToDraw.push_back(croix1);
  draw.listToDraw.push_back(c);
  draw.listToDraw.push_back(c2);
  draw.listToDraw.push_back(croix2);
  draw.save(std::string("test_list.bmp"));
  
  draw.setImage(c->draw());
  draw.save(std::string("test_Carre_Coord.bmp"));
  
  draw.setImage(c2->draw());
  draw.save(std::string("test_Carre_Full.bmp"));

  draw.setImage(croix1->draw());
  draw.save(std::string("test_Croix_Coord.bmp"));

  draw.setImage(croix2->draw());
  draw.save(std::string("test_Croix_Full.bmp"));

  Rectangle *r1 = new Rectangle(50,70,200,width,height,150,100,draw.getImage());
  draw.setImage(r1->draw());
  draw.save(std::string("test_Rectangle_Coord.bmp"));

  Rectangle *r2 = new Rectangle(200,width,height,draw.getImage());
  draw.setImage(r2->draw());
  draw.save(std::string("test_Rectangle_Full.bmp"));

  Segment *s1 = new Segment(0,0,20,true,200,width,height,100,100,draw.getImage());
  draw.setImage(s1->draw());
  draw.save(std::string("test_Segment_Coord_horizontal.bmp"));

  Segment *s1Bis = new Segment(0,0,20,false,200,width,height,100,100,draw.getImage());
  draw.setImage(s1Bis->draw());
  draw.save(std::string("test_Segment_Coord_Vertical.bmp"));

  Segment *s2 = new Segment(true,200,width,height,draw.getImage());
  draw.setImage(s2->draw());
  draw.save(std::string("test_Segment_Full_horizontal.bmp"));

  Segment *s2Bis = new Segment(false,200,width,height,draw.getImage());
  draw.setImage(s2Bis->draw());
  draw.save(std::string("test_Segment_Full_Vertical.bmp"));*/

  std::cout << "End" << std::endl;
  return 0;
}