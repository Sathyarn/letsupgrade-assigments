#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
float a;
int s=1,n=0;
do{
s=n+s;
n++;
}
while(n<=10);
a=s/10;
cout<<endl<<"Average of integer 1 to10: "<<a;
cout<<endl<<"sum: "<<s;
getch();
}