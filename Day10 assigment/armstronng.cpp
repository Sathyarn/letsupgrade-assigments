#include<iostream>
using namespace std;
int main()
{
    int n,n1,s,i,r;

    cout<<endl<<"Enter the upper limit of range:";
    cin>>r;

    for(i=1;i<=r;i++)
    {
        s=0;
        n=i;

        while(n>0)
        {
            n1=n%10;
            s=s+(n1*n1*n1);
            n=n/10;
        }
        if(s==i)
            cout<<"   "<<i;
    }
}
