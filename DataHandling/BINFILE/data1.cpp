#include<iostream>
#include<fstream>
#include<string.h>

struct customer
{
    char name[20];
    float balance;
};

int main()
{
  customer savac;
  strcpy(savac.name, "Himanshu");
  savac.balance = 1001.5;
  std::ofstream fout;
  fout.open("customer", std::ios::out|std::ios::binary);
  if(!fout)
  {
    std::cout << "Can't open that file";
    return 1;
  }
  fout.write((char *)&savac, sizeof(customer));
  fout.close();
  return 0;
}
