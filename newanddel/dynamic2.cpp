#include<iostream>
#include<string.h>

class student
{
  private:
      int rollno;
      char *name;
      char *addr;
  public:
      student(int , char *, char *);
      void display();
      ~student();
};
int main()
{
  student S1(1000, "Himanshu", "BLS");
  student S2(1001, "Chandrakant", "BBSR");
  S1.display();
  S2.display();
  return 0;
}
student::student(int x, char *y, char *z)
{
  rollno=x;
  int len=strlen(y);
  name=new char[len+1];
  strcpy(name, y);
  len=strlen(z);
  addr=new char[len+1];
  strcpy(addr, z);
}
student::~student()
{
  delete name;
  delete addr;
}
void student::display()
{
  std::cout << "NAME:- " << name << '\n';
  std::cout << "ROLL NO:- " << rollno << '\n';
  std::cout << "ADDR.:- " << addr << '\n';
}
