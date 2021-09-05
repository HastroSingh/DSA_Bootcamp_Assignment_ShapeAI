#include<iostream>
using namespace std;
int main()
{ int n,i,j,x;
    cout<<"Enter the Size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array :";
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
}
cout<<"The Second Largest Number in the Array is :"<<arr[1];
return 0;
}
