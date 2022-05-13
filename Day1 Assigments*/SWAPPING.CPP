#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
cout<<endl<<"Enter the value of a:";
cin>>a;
cout<<endl<<"Enter the value of b:";
cin>>b;
cout<<"a value is :"<<a<<","<<"b value is: "<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<endl<<"a and b value after swapping: a value is: "<<a<<" ,b value is: " <<b;
getch();
}