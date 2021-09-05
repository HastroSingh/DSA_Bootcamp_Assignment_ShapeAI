#include <iostream>
using namespace std;

int main()
{
    int i=0,n=0,n1=0,n2=1,n3=0;
    
    cout<<"Enter the number of elements in the Fibonacci Series :";
    cin>>n;
    
    cout<<"\n Fibanacci Series :"<<n1<<" "<<n2;
    
    for(i=3; i<=n; i++)
    {
        n3=n1+n2;
        cout<<" "<<n3;
        n1=n2;
        n2=n3;
    }
}
