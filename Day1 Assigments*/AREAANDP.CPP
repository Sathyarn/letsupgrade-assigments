#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int w,l,Area,Perimeter;
cout<<endl<<"Here we Find the AREA and PERIMETER of Rectangle using Width and Length";
cout<<endl<<"Enter the value of Width: ";
cin>>w;
cout<<endl<<"Enter the value of Length: ";
cin>>l;
Perimeter=2*l+2*w;
Area=l*w;
cout<<endl<<"Area of the rectangle is: "<<Area;
cout<<endl<<"Perimeter of the rectangle is: "<<Perimeter;
getch();
}
