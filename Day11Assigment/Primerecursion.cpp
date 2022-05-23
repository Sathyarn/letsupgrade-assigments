#include<iostream>
using namespace std;

int addeven(int);

int main()
{
    int n,ans;

    cout<<endl<<"Enter the upper limit :";
    cin>>n;

    ans=addeven(n);

    cout<<endl<<"SUM OF EVEN NO IN RANGE IS :"<<ans;
}
int addeven(int n)
{
    if(n==0)
        return 0;
    else
    {
        if(n%2==0)
            return n+addeven(n-2);
        else
            return addeven(n-1);   
    }

}
