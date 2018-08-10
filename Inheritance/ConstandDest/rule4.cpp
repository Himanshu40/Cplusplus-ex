#include<iostream>

class rectangle
{
  protected:
    int length, breadth;
  public:
    rectangle();
    rectangle(int ,int );
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

rectangle::rectangle()
{
  length = 4;
  breadth = 5;
}

rectangle::rectangle(int x, int y)
{
  length = x;
  breadth = y;
}

square::square(int x, int y, int z)
{
  side = z;
}

void square::display()
{
  std::cout<<length<<std::endl;
  std::cout<<breadth<<std::endl;
  std::cout<<side<<std::endl;
}
