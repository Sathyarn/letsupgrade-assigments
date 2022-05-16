#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int l,b;
cout<<endl<<"Find the given part is square or not";
cout<<endl<<"Enter the length: ";
cin>>l;
cout<<endl<<"Enter the breadth: ";
cin>>b;
if(l==b){
cout<<endl<<"Length and Breadth are equal"<<endl<<"It is Square";
}
else{
cout<<endl<<"It is not Square";
}
getch();
}