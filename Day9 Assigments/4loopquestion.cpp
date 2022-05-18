
#include <iostream>

using namespace std;

int main()
{
    int i,j,sp=40,n;
    cout<<endl<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=sp;j++)
                cout<<" ";
            for(j=1;j<=i;j++)
            {
                ((j==1)||(j==i))? cout<<"   "<<"1":cout<<"   "<<"0";
            }  
            cout<<endl;
            sp=sp-2;
        }

    return 0;
}
