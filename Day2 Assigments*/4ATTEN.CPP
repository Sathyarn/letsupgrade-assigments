#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int n,a,m=75;
float p;
cout<<endl<<"Enter the number of class held: ";
cin>>n;
cout<<endl<<"Enter the number of class attended: ";
cin>>a;
p=(a/n)*100;
if(p>m){
	cout<<endl<<"You are allowed to attend the Exam";
}
else{
     cout<<endl<<"Your attendence is lower than 75%";
     cout<<endl<<"You are not allowed to attend the Exam";
}
getch();
}