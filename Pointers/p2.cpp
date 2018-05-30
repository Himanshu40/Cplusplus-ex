#include<iostream>
int main()
{
  int x, *p, **q;
  x=5;
  p=&x;
  q=&p;
  std::cout << "Value of X:- " << x << '\n';
  std::cout << "Address of X:-"<< &x << '\n';
  std::cout << "Value of P:- "<< p << '\n';
  std::cout << "Value of address present at P:- "<< *p << '\n';
  std::cout << "Address of P:- "<< &p << '\n';
  std::cout << "Value of Q:- " << q << '\n';
  std::cout << "Address present at Q:- " << *q << '\n';
  std::cout << "Value of Q:- " << **q << '\n';
  std::cout << "Address of Q:- " << &q << '\n';
}
