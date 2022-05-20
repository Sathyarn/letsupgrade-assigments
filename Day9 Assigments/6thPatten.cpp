#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<endl<<"Enter the value of n: ";
    cin>>n;
    int i,j,sp;
    //sp=((n/2)-3)/4;
    sp=0;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++)
            cout<<setw(4)<<j;
        for(j=1;j<=sp;j++)
            cout<<" ";
        if(i!=n)
            j=i;
        else
            j=i-1;
            for(;j>=1;j--)
                cout<<setw(4)<<j;
        sp=sp+4;
        if(sp>4)
        sp=sp+4;
        cout<<endl;
        
    }
}
  
