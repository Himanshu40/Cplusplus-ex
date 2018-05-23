#include<iostream>
class amount
{
    private:
        float principal, time, interest;
    public:
        amount();
        amount(float , float t=2.5, float i=5.3);
        void display();
};
int main()
{
  amount A1;
  amount A2(5000);
  A1.display();
  A2.display();
}
amount::amount()
{
  std::cout<<"\nEnter principal rate:- \n";
  std::cin>>principal;
  std::cout<<"Enter time:- \n";
  std::cin>>time;
  std::cout<<"Enter rate of interest:- \n";
  std::cin>>interest;
}
amount::amount(float p, float t, float i)
{
  principal=p;
  time=t;
  interest=i;
}
void amount::display()
{
  std::cout<<"\nprincipal rate:- "<<principal<<"\n";
  std::cout<<"time:- "<<time<<"\n";
  std::cout<<"interest:- "<<interest<<"\n";
  std::cout<<"SI:- "<<(principal*time*interest)/100<<"\n";
}
