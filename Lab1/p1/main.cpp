#include "rectangle.h"
#include <iostream>

using namespace std;

void TestRectangle(Rectangle &x) {
  cout << x.GetHeight() << ' ' << x.GetWidth() << ' ' << x.Area() << ' '
       << x.Perimeter() << '\n';
}

signed main() {
  Rectangle *P = new Rectangle(3, 3);
  if (0)
    for (int i = 0; i < 50000000; i++) {
      P = new Rectangle();
    }
  Rectangle A(2, 3);
  Rectangle B(4, 5);

  TestRectangle(A);
  TestRectangle(B);
  B.SetWidth(10);
  TestRectangle(B);
  Rectangle C;
  TestRectangle(C);
  TestRectangle(*P);
  cout << P->Area() << '\n';
  // delete P;
  // cout << "Pip\n";
  Rectangle arr[] = {
      Rectangle(2, 3),
      Rectangle(3, 6),
      Rectangle(9, 1),
      Rectangle(9, 2),
  };
  for (auto &h : arr)
    TestRectangle(h);
}
