#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[5],rvs[5],i,n,n1,s;
    for(i=0;i<5;i++){
        cout<<endl<<"Enter the Number: ";
        cin>>a[i];
        
        n=a[i];
        s=0;
        while(n>0){
            n1=n%10;
            n=n/10;
            s=(s*10)+n1;
        }
        //cout<<"reverse number: "<<s;
        rvs[i]=s;
    }
    for(i=0;i<5;i++)
        cout<<endl<<a[i]<<"\t"<<"reverse value of "<<a[i]<<" is "<<rvs[i];
}
