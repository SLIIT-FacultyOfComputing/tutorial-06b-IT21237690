#include "Box.h"

void Box::setlength(double l)
{
  length = l;
}
void Box::setwidth(double w)
{
  width = w;
}
void Box::setheight(double h)
{
  height = h;
}

int Box::getlength()
{
  return length;
}
int Box::getheight()
{
  return height;
}
int Box::getwidth()
{
  return width;
}


int Box::calcVolume() 
{
  return height + length + width;
}
