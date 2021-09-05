#include <iostream>
using namespace std;

int main()
{
    int a=0,b=0;
    cout<<"Enter Two Numbers :";
    cin>>a>>b;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"The numbers after swap are \n";
    cout<<"A = "<<a<<"\n";
    cout<<"B = "<<b<<"\n";
     return 0;
}
