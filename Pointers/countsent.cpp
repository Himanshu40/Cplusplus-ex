#include<iostream>
#include<stdio.h>
int main()
{
  char sent[30], *p;
  int count=0;
  p=sent;
  std::cout << "Enter a sentence:-" << '\n';
  std::cin.getline(sent, 30);
  std::cout << "---To count space in between words in a sentnce---" << '\n';
  for(p;*p!='\0';p++)
  {
    if(*p==' ')
      count++;
  }
  std::cout << "Total numer of space:-" << '\n' << count << '\n';
  return 0;
}
