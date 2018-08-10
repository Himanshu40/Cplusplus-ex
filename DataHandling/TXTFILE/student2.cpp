#include<fstream>
#include<iostream>
int main()
{
  std::ofstream fout("STUDENT.TXT", std::ios::app);
  char ans = 'y';
  int rollno;
  float marks;
  while(ans == 'y'||ans == 'Y')
  {
    std::cout << "Enter rollno:";
    std::cin >> rollno;
    std::cout << "Enter marks:";
    std::cin >> marks;
    fout << rollno << '\n' << marks << '\n';
    std::cout << "Want to enter more data ? (y/n).... ";
    std::cin >> ans;
  }
  fout.close();
  return 0;
}
