#include<fstream>
int main()
{
  std::ofstream fout("DATA.txt"); //using constructor
  fout<<"Well done"<<"\n";
  fout.close();
  return 0;
}
