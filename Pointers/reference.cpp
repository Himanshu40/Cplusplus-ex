#include <iostream>

void reference(int &num1);

using namespace std;

int main()
{
    int num = 2;
    cout<<"Value of Num : "<<num<<endl;
    reference(num);
    cout<<"Value of num now : "<<num<<endl;
    return 0;
}

void reference(int &num1)
{
    cout<<"Value of num after passing through reference"<<endl;
    cout<<"Value of Num : "<<num1<<endl;
    cout<<"Value of num increases to 1"<<endl;
    num1++;
}