#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers :";
    cin>>a>>b>>c;
    
   if(a>b && a>c)
      cout<<a<<" Is Largest";
   else if(b>a && b>c)
       cout<<b<<" Is Largest";
    else
       cout<<c<<" Is Largest";
 
return 0;
}
