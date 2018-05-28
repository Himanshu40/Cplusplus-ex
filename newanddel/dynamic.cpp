#include<iostream>
int main()
{
  int num, *p;
  std::cout << "Enter the size:-" << '\n';
  std::cin >> num;
  p = new int[num];
  for(int i=0;i<num;i++)
  {
    std::cout << "Enter the number:-" << '\n';
    std::cin >> p[i];
  }
  std::cout << "The numbers are as follows:-" << '\n';
  for(int i=0;i<num;i++)
    std::cout << p[i] << '\n';
  delete p;
  return 0;
}
