#include "shape.h"
virtual double Shape::calculate_area(double base1, double base2, double height)
{
  return ((base1 + base2) / 2 ) * height;
}
Circle::Circle(double radius)
{
  this->radius = radius;
}
double Circle::calculate_area(double radius)
{
  return 3.14*radius*radius;
}
void Circle::print_area()
{
  cout << calculate_area(radius) << endl;
}
Rectangle::Rectangle(double length, double width)
{
  this->length = length;
  this->width = width;
}
double Rectangle::calculate_area(double length, double width)
{
  return length * width;
}
void Rectangle::print_area()
{
  cout << calculate_area(length, width) << endl;
}
Triangle::Triangle(int base, int height)
{
  this->base = base;
  this->height = height;
}
double Triangle::calculate_area(int base, int height)
{
  return 0.5*base*height;
}
void Triangle::print_area()
{
  cout << calculate_area(base, height) << endl;
}
