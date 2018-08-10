#include<fstream>
#include<iostream>
int main()
{
  std::ofstream fout("name.txt");
  fout << "Himanshu\n" << "Ankit\n" << "Stark\n";
  fout.close();
  std::ifstream fin("name.txt");
  char name[10];
  fin.getline(name, 10);
  std::cout << name << '\n';
  fin.getline(name, 10);
  std::cout << name;
  fin.close();
  return 0;
}
