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

class B:private A
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
  b.get();
  b.print();
  return 0;
}

void B::get()
{
  std::cin>>f>>e>>d;
  getdata();
}

void B::print()
{
  std::cout<<"f = "<<f<<'\n'<<"e = "<<e<<'\n'<<"d = "<<d<<'\n';
  printdata();
}

void A::getdata()
{
  std::cin>>c>>b>>a;
}

void A::printdata()
{
  std::cout<<"c = "<<c<<'\n'<<"b = "<<b<<'\n'<<"a = "<<a<<'\n';
}
