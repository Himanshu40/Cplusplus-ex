#include<iostream>
#include<stdio.h>
struct student
{
  char name[20];
  char add[20];
  int rollno;
};
int main()
{
  struct student S[5], *p;
  int count=1;
  p=&S[0];
  std::cout << "-----Enter details of five students-----" << '\n';
  for(int i=0;i<5;i++)
  {
    std::cout << "---Student "<< count << "---" << '\n';
    std::cout << "Name:- ";
    std::cin >> p->name;
    std::cout << "Address:- ";
    std::cin >> p->add;
    std::cout << "Roll no:- ";
    std::cin >> p->rollno;
    count++;
    p++;
  }
  count=1;
  std::cout << "\n-----Details of five students-----" << '\n';
  for(int j=0;j<5;j++)
  {
    std::cout << "---Student "<< count << "---" << '\n';
    std::cout << "Name:- ";
    puts(p->name);
    std::cout << "Address:- ";
    puts(p->add);
    std::cout << "Roll no:- ";
    std::cout << p->rollno << '\n';
    count++;
    p++;
  }
  return 0;
}
