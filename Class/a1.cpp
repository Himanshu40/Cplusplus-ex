#include<iostream>
#include<string.h>
#include<stdio.h>
class student{
    private:
            int rollno;
            char name[7];
            char add[5];
            char emailid[20];
    public:
            student();
            student(int , char [], char []);
            student(int , char [], char [], char []);
            void display();
            void display(char []);
};
int main(){
    student S1;
    student S2(100,"RAM","BLS");
    student S3(101,"SHYAM","BLS","shyam@gmail.com");
    S1.display();
    S2.display();
    S3.display();
}
student::student(){
    rollno=50;
    strcpy(name,"HARI");
    strcpy(add,"BBSR");
}
student::student(int x, char n[7], char a[5]){
    rollno=x;
    strcpy(name,n);
    strcpy(add,a);
}
student::student(int x, char n[7], char a[5], char e[20]){
  rollno=x;
  strcpy(name,n);
  strcpy(add,a);
  strcpy(emailid, e);
}
void student::display(){
  std::cout<<"\nROLL NO:- "<<rollno<<"\n";
  std::cout<<"NAME:- ";
  puts(name);
  std::cout<<"ADD.:- ";
  puts(add);
}
void student::display(char e[20]){
  std::cout<<"\nROLL NO:- "<<rollno<<"\n";
  std::cout<<"NAME:- ";
  puts(name);
  std::cout<<"ADD.:- ";
  puts(add);
  std::cout<<"EMAIL ID:- ";
  puts(emailid);
}
