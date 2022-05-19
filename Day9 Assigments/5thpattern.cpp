#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<endl<<"Enter the value of n: ";
    cin>>n;
    int i,j,sp;
    sp=((n*2)-3)*4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            cout<<"   "<<j;
        for(j=1;j<=sp;j++)
            cout<<" ";
        if(i!=n)
            j=i;
        else
            j=i-1;
            for(;j>=1;j--)
                cout<<"   "<<j;
        cout<<endl;
        sp=sp-8;
    }
}
    
