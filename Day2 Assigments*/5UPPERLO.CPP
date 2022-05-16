#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
char ch;
cout<<endl<<"Enter the alphabet: ";
cin>>ch;
if(ch>='A' && ch<='Z'){
	cout<<endl<<"You entered Uppercase";
}
else if(ch>='a' && ch<='z'){
	cout<<endl<<"You entered Lowercase";
}
else{
	cout<<endl<<"you not entered alphabet";
}
getch();
}
