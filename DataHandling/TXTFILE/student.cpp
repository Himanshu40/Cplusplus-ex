#include<fstream>
#include<iostream>
int main()
{
  std::ofstream fout("STUDENT.txt");
  char ans = 'y';
  int rollno;
  float marks;
  while(ans == 'y' || ans == 'Y')
  {
    std::cout << "Enter Roll number:- ";
    std::cin >> rollno;
    std::cout << "Enter Marks:- ";
    std::cin >> marks;
    fout << rollno << '\n' << marks << '\n';
    std::cout << "\nWant to enter more data ? (y/n)....";
    std::cin >> ans;
    std::cout << '\n';
  }
  fout.close();
  return 0;
}
