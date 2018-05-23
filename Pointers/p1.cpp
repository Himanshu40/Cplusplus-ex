#include<iostream>
void setvalueref(int *x)
{
  *x+=6;
}
int main()
{
  int *n, no=5;
  n=&no;
  std::cout<<"This is it "<<*n<<"\n";
  std::cout<<"This is it "<<n<<"\n";
  setvalueref(&no);
  std::cout<<"This is it "<<no<<"\n";
  return 0;
}
