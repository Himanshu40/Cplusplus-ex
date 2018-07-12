#include<iostream>

class rectangle
{
  protected:
    int length, breadth;
};

class square:public rectangle
{
    int side;
  public:
    square(int , int , int );
    void display();
};

int main()
{
  square S1(1, 2, 3);
  S1.display();
}

square::square(int x, int y, int z)
{
  length = x;
  breadth = y;
  side = z;
}

void square::display()
{
  std::cout<<length<<std::endl;
  std::cout<<breadth<<std::endl;
  std::cout<<side<<std::endl;
}
