#include<iostream>
#include<stdio.h>
#include<string.h>
class student
{
      int rollno, age;
      char name[20];
    public:
      student(char *x="Himanshu", int y=100, int z=20);
      student(int x=101, int y=18, char *z="Avneet");
      void display();
};
int main()
{
  student s1("Chandra");
  student s2(102);
  s1.display();
  s2.display();
}
student::student(char *x, int y, int z)
{
  strcpy(name,x);
  rollno=y;
  age=z;
}
student::student(int x, int y, char *z)
{
  rollno=x;
  age=y;
  strcpy(name,z);
}
void student::display()
{
  std::cout<<"Name:- ";
  puts(name);
  std::cout<<"Rollno:- "<<rollno<<"\n";
  std::cout<<"Age:- "<<age<<"\n";
}
