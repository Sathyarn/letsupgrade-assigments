#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int i,n;
cout<<endl<<"Enter the 'n' value: ";
cin>>n;
cout<<endl<<"Here you display Even values using for loop";
for(i=1;i<=n;i++){
	if(i%2==0){
		cout<<endl<<i;
		}
	}
cout<<endl<<"Here you display Even values using while loop";
i=1;
while(i<=n){
       if(i%2==0){
		cout<<endl<<i;
		}
       i++;
       }
cout<<endl<<"Here you display Even values using do while loop";
i=1;
do{
	cout<<endl<<"Even values using Do while loop";
	cout<<endl<<i ;
	if(i%2==0){
		cout<<endl<<i;
		i++;
		}
	}
while(i<=n);
getch();
}
