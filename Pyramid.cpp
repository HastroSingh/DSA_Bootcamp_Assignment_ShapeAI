#include<iostream>
using namespace std;
int main()
{
    int i, s, j, n;
    cout<<"Enter the Length of the Desired Pattern :";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(s=n; s>i; s--)
            cout<<" ";
        for(j=0; j<i; j++)
            cout<<"* ";
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}
