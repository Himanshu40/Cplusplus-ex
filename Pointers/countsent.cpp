#include<iostream>
#include<stdio.h>
int main()
{
  char sent[30], *p;
  int count=0;
  p=sent;
  std::cout << "Enter a sentence:-" << '\n';
  gets(sent);
  std::cout << "---To count space in between words in a sentnce---" << '\n';
  for(int i=1;i<=30;i++)
  {
    if(*p==' ')
      count++;
    p++;
  }
  std::cout << "Total numer of space:-" << '\n' << count << '\n';
  return 0;
}
