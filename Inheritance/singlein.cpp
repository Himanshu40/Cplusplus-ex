#include<iostream>
#include<stdio.h>

class student
{
    int rollno;
    char name[20];
  protected:
    char addr[10];
  public:
    void geti();
    void printi();
};

class mark:public student
{
    int phy, chem, math;
  public:
    void getdata();
    void printdata();
};

int main()
{
  mark M1;
  M1.getdata();
  M1.printdata();
}

void mark::getdata()
{
  geti();
  std::cout<<"Enter marks of PHY, CHEM, MATH:- "<<'\n';
  std::cin>>phy>>chem>>math;
}

void mark::printdata()
{
  printi();
  std::cout<<"Marks of PHY:- "<<phy<<'\n';
  std::cout<<"Marks of CHEM:- "<<chem<<'\n';
  std::cout<<"Marks of MATH:- "<<math<<'\n';
}

void student::geti()
{
  std::cout<<"Enter name:- "<<'\n';
  std::cin.ignore();
  std::cin.getline(name, 20);
  fgets(name, 20, stdin);
  std::cout<<"Enter roll number:- "<<'\n';
  std::cin>>rollno;
  std::cout<<"Enter address:- "<<'\n';
  std::cin.ignore();
  std::cin.getline(addr, 10);
}

void student::printi()
{
  std::cout<<"NAME:- "<<name<<'\n';
  std::cout<<"ROLL NUMBER:- "<<rollno<<'\n';
  std::cout<<"ADDRS.:- "<<addr<<'\n';
}
