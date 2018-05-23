#include<iostream>
#include<stdio.h>
int main()
{
  char string[20], *p, *x;
  int count;
  p=string;
  std::cout << "Enter a string:- " << '\n';
  std::cin.getline(string, 20);
  for(count=0;string[count]!='\0';count++);
  x=&string[count-1];
  int flag=1, i;
  for(i=0;i<(count/2);i++)
  {
    if(*p!=*x)
    {
      flag=0;
      break;
    }
    p++;
    x--;
  }
  if(flag!=0)
    std::cout << "It is Palindrome" << '\n';
  else
    std::cout << "It is not a Palindrome" << '\n';
  return 0;
}
