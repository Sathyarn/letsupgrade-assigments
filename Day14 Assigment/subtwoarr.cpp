#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[3][3],b[3][3],sub[3][3],i,j;
    //a matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter the vale of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<setw(4);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<setw(4);
        }
        cout<<endl;
    }
    //b matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter the vale of b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }
    cout<<setw(4);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<b[i][j]<<setw(4);
        }
        cout<<endl;
    }
    for(i=0;i<3;i++){
       for(j=0;j<3;j++)
           sub[i][j]=a[i][j]-b[i][j];
    }
    cout<<"The subraction of a & b is: "<<endl;
    cout<<setw(4);
    for(i=0;i<3;i++){
       for(j=0;j<3;j++)
        cout<<sub[i][j]<<setw(4);
        cout<<endl;
    }
    cout<<endl;
}
