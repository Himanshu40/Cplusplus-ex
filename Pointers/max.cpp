#include<iostream>
int main()
{
  int num[10], *p, max;
  p=num;
  std::cout << "Enter 10 numbers:-" << '\n';
  for(int i=0;i<10;i++)
      std::cin >> num[i];
  std::cout << "---Find a maximum number---" << '\n';
  max=*p;
  for(int i=1;i<=10;i++)
  {
    if(max<*p)
      max=*p;
    p++;
  }
  std::cout << "Maximum number from 10 nos:-" << '\n' << max << '\n';
  return 0;
}
