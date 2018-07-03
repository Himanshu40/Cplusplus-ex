#include<iostream>

class A
{
    int a;
  protected:
    int b;
  public:
    int c;
    void getdata();
    void printdata();
};

class B:public A
{
    int d;
  protected:
    int e;
  public:
    int f;
    void get();
    void print();
};

int main()
{
  B b;
  b.f = 6;
  b.c = 3;
  b.getdata();
  b.printdata();
  std::cout<<"\nc = "<<b.c<<"\n";
  b.get();
  b.printdata();
  std::cout<<"\nf = "<<b.f<<"\n";
}

void B::get()
{
  d = 4;
  e = 5;
}

void B::print()
{
  std::cout<<"d = "<<d<<"\n"<<"e = "<<e;
}

void A::getdata()
{
  a = 1;
  b = 2;
}

void A::printdata()
{
    std::cout<<"a = "<<a<<"\n"<<"b = "<<b;
}
