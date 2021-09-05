#include <iostream>
using namespace std;
int main()
{   int i,a,count=0;
     cout<<"Enter the number :";
    cin>>a;
  for(i=2; i<=a/2; i++){
        if(a%i == 0){
        count+=1; }
}
    if(count==0)
     cout<<a<<" is a Prime Number";
    else
     cout<<a<<" is Not Prime Number";
}
