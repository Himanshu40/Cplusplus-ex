#include<iostream>
#include<fstream>
int main()
{
  std::ofstream fout("student.txt");
  char name[30];
  float mark=0.0;
  for(int i=0;i<5;i++)
  {
    std::cout << "Student " << (i+1) << " :\tName:";
    std::cin.getline(name, 30);
    std::cout << "\t\tMarks:";
    std::cin >> mark;
    fout << name << '\n' << mark << '\n';
    std::cin.ignore();
  }
  fout.close();
  std::ifstream fin("student.txt");
  fin.seekg(0);
  std::cout << '\n';
  for(int x=0;x<5;x++)
  {
    fin.get(name, 30);
    fin >> mark;
    std::cout << "Student Name: " << name;
    std::cout << "\tMarks: " << mark <<'\n';
    fin.ignore();
  }
  fin.close();
  return 0;
}
