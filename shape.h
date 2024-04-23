class Shape
{
public:
  virtual double calculate_area(double base1, double base2, double height);
};
class Circle : Shape 
{
  double radius;
public:
  Circle(double radius);
  double calculate_area(double radius);
  void print_area();
};
class Rectangle : Shape 
{
  double length;
  double width;
public:
  Rectangle(double length, double width);
  double calculate_area(double length, double width);
  void print_area();
};
class Triangle : Shape 
{
  int base;
  int height;
public:
  Triangle(int base, int height);
  double calculate_area(int base, int height);
  void print_area();
};
