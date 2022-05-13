#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
char charecter;
cout<<"Enter the charecter: ";
cin>>charecter;
switch(charecter){
	case 'a':
	cout<<"Your charecter is a and it ia vowel";
	break;
	case 'e':
	cout<<"Your charecter is e and it ia vowel";
	break;
	case 'i':
	cout<<"Your charecter is i and it ia vowel";
	break;
	case 'o':
	cout<<"Your charecter is o and it ia vowel";
	break;
	case 'u':
	cout<<"Your charecter is u and it ia vowel";
	break;
	default:
	cout<<"Your charecter is "<<charecter<<" and it is not vowel";
	}
	getch();
	}
