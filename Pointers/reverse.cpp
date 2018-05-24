#include<iostream>
int main()
{
  int num[10], i, *p;
  p=&num[9];
  std::cout << "Enter the numbers upto 10:-" << '\n';
  for(i=0;i<10;i++)
    std::cin >> num[i];
  std::cout << "Here are the numbers:-" << '\n';
  for(i=10;i>=1;i--)
  {
    std::cout << *p << '\n';
    p--;
  }
  return 0;
}
