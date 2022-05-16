#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int M;
cout<<endl<<"Enter the mark of the student: ";
cin>>M;
if(M>80){
	cout<<endl<<"Your got A grade Excellent!";
	}
else if(M>=60 && M<=80){
	cout<<endl<<"Your got B grade V Good!";
	}
else if(M>=50 && M<=60){
	cout<<endl<<"Your got C grade Good!";
	}
else if(M>=45 && M<=50){
	cout<<endl<<"Your got D grade Work Hard";
	}
else if(M>=25 && M<=45){
	cout<<endl<<"Your got E grade Try to get good marks";
	}
else if(M<25){
	cout<<endl<<"Your got F grade 'You need to try more'!";
	}
getch();
}