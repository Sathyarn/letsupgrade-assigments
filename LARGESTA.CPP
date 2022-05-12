#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int v1,v2,v3;
cout<<"Find the Largest Number among Three Number";
cout<<endl<<"Enter the value of v1:";
cin>>v1;
cout<<endl<<"Enter the value of v2:";
cin>>v2;
cout<<endl<<"Enter the value of v3:";
cin>>v2;
if(v1>v2 && v1>v3){
	cout<<"Value v1: "<<v1<<" is Greater among v2 & v3";
	}
else if(v2>v1 && v2>v3){
	cout<<"Value v2: "<<v2<<" is Greater among v1 & v3";
	}
else{
	cout<<"Value v3: "<<v3<<" is Greater among v1 & v2";
	}
getch();
}
