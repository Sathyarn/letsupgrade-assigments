#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    int space=40;
    for(i=1; i<=6; i++)
    {   
        for(j=1; j<=space; j++)
            cout<<setw(4);
      
        for(j=1; j<=i; j++)
            cout<<setw(4)<<j;
        
        for(j=i-1; j>=1; j--)
            cout<<setw(4)<<j;
            
        cout<<endl;
        space=space-4;
    }
    return 0;
}
