#ifndef H_RECTANGLE
#define H_RECTANGLE
class Rectangle {
private:
  double width;
  double height;

public:
  Rectangle();
  Rectangle(double, double);
  void SetWidth(double);
  double GetWidth();
  void SetHeight(double);
  double GetHeight();
  double Area();
  double Perimeter();
  ~Rectangle();
};
#endif
