#include<iostream>

class circle
{
    int r;
  public:
    circle(int );
    void print(circle );
};

int main()
{
  circle C1(5);
  circle C2(6);
  C1.print(C2);
}

circle::circle(int x)
{
  r=x;
}

void circle::print(circle C)
{
  r+=C.r;
  std::cout << r << '\n';
}
