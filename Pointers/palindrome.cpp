#include<iostream>
#include<stdio.h>
int main()
{
  char string[20], *p, *x;
  int count;
  p=string;
  x=string;
  std::cout << "Enter a string:- " << '\n';
  std::cin.getline(string, 20);
  for(x;*x!='\0';x++);
  x--;
  int flag=1, i;
  for(p;*p!='\0';p++)
  {
    if(*p!=*x)
    {
      flag=0;
      break;
    }
    x--;
  }
  if(flag!=0)
    std::cout << "It is Palindrome" << '\n';
  else
    std::cout << "It is not a Palindrome" << '\n';
  return 0;
}
