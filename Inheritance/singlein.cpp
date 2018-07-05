#include<iostream>
#include<stdio.h>

class student
{
    int rollno;
    char name[20];
  protected:
    char addr[10];
    void get();
  public:
    void getdata();
    void printdata();
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
  student::getdata();
  std::cout<<"Enter marks of PHY, CHEM, MATH:- "<<'\n';
  std::cin>>phy>>chem>>math;
}

void mark::printdata()
{
  student::printdata();
  std::cout<<"Marks of PHY:- "<<phy<<'\n';
  std::cout<<"Marks of CHEM:- "<<chem<<'\n';
  std::cout<<"Marks of MATH:- "<<math<<'\n';
}

void student::getdata()
{
  std::cout<<"Enter name:- "<<'\n';
  std::cin.getline(name, 20);
  std::cout<<"Enter roll number:- "<<'\n';
  std::cin>>rollno;
  std::cout<<"Enter address:- "<<'\n';
  get();
}

void student::printdata()
{
  std::cout<<"NAME:- "<<name<<'\n';
  std::cout<<"ROLL NUMBER:- "<<rollno<<'\n';
  std::cout<<"ADDRS.:- "<<addr<<'\n';
}

void student::get()
{
  std::cin.ignore();
  std::cin.getline(addr, 10);
}
