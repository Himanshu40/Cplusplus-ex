#include<fstream>
#include<iostream>
int main()
{
  std::ofstream fout;
  fout.open("DATA.txt"); //using function
  fout<<"Well done"<<"\n";
  fout.close();
  return 0;
}
