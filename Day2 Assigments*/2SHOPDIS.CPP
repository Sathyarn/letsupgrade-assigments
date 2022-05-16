#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
float C,T,N,O=0.1;
float D;
cout<<endl<<"Here shop gives 10% discount on cost of Purchased quantity is more than 1000";
cout<<endl<<"10% offer on Purchase more than 1000 units";
cout<<endl<<"Enter the Number of Quantity you need to Purchase: ";
cin>>N;
if(N>1000){
C=100*N;
D=O*C;
T=C-D;
cout<<endl<<"Your Purchased quantity: "<<N;
cout<<endl<<"Cost of "<<N<<"quantity "<<C;
cout<<endl<<"Discount price: "<<D;
cout<<endl<<"Total cost: "<<T;
}
else{
C=100*N;
T=C-D;
cout<<endl<<"Your Purchased quantity: "<<N;
cout<<endl<<"Cost of "<<N<<"quantity "<<C;
cout<<endl<<"Total cost: "<<T;
}
getch();
}