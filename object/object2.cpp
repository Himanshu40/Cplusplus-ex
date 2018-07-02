#include<iostream>

class Circle
{
    int r;
  public:
    Circle(int );
    void print(Circle &);
};

int main()
{
  Circle C1(5);
  Circle C2(7);
  C1.print(C2);
}

Circle::Circle(int x)
{
  r=x;
}

void Circle::print(Circle &C)
{
  r+=C.r;
  std::cout<<r<<"\n";
}
