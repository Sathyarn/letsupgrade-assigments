#include<iostream>
using namespace std;
int main(){
    int i,j,n,sp=40;
    cout<<endl<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++)
            cout<<" ";
            sp=sp-2;
            if(i%2==0){
                for(j=1;j<=i;j++){
                cout<<"   "<<"0";
                }  
                cout<<endl;
            }else{
                for(j=1;j<=i;j++){
                cout<<"   "<<"1";
                }
                cout<<endl;  
            }
    }
}
