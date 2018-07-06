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

class mark:private student
{
    int phy, chem, math;
  public:
    void getdata();
    void printdata();
};

class lib:private student
{
    int lib_id;
    char book_name[15];
    char author_name[15];
  public:
    void getdata();
    void printdata();
};

int main()
{
  mark M1;
  lib L1;
  M1.getdata();
  L1.getdata();
  M1.printdata();
  L1.printdata();
  return 0;
}

void student::get()
{
  std::cout<<"Enter address:-"<<"\n";
  std::cin.ignore();
  std::cin.getline(addr, 20);
}

void student::getdata()
{
  std::cout<<"Enter name:-"<<"\n";
  std::cin.getline(name, 20);
  std::cout<<"Enter roll number:-"<<"\n";
  std::cin>>rollno;
}

void student::printdata()
{
  std::cout<<"NAME:- "<<name<<"\n";
  std::cout<<"ROLL NUMBER:- "<<rollno<<"\n";
  std::cout<<"ADDRESS:- "<<addr<<"\n";
}

void mark::getdata()
{
  student::getdata();
  student::get();
  std::cout<<"Enter marks of PHY, CHEM, MATH:- "<<'\n';
  std::cin>>phy>>chem>>math;
}

void mark::printdata()
{
  student::printdata();
  std::cout<<"Marks of PHY:- "<<phy<<"\n";
  std::cout<<"Marks of CHEM:- "<<chem<<"\n";
  std::cout<<"Marks of MATH:- "<<math<<"\n";
}

void lib::getdata()
{
  std::cout<<"Enter library ID:-"<<"\n";
  std::cin>>lib_id;
  std::cout<<"Enter book name:-"<<"\n";
  std::cin.ignore();
  std::cin.getline(book_name, 15);
  std::cout<<"Enter author name:-"<<"\n";
  std::cin.getline(author_name, 15);
}

void lib::printdata()
{
  std::cout<<"LIBRARY ID:- "<<lib_id<<"\n";
  std::cout<<"BOOK NAME:- "<<book_name<<"\n";
  std::cout<<"AUTHOR NAME:- "<<author_name<<"\n";
}
