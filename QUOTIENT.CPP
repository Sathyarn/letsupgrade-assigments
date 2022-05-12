#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int dividend, divisor,quotient,remainder;
cout<<endl<<"Find Quotient and Remainder";
cout<<endl<<"Enter the dividend: ";
cin>>dividend;
cout<<endl<<"Enter the divisor: ";
cin>>divisor;
quotient=dividend/divisor;
remainder=dividend%divisor;
cout<<endl<<"The quotient is: "<<quotient;
cout<<endl<<"The remainder is: "<<remainder;
getch();
}

