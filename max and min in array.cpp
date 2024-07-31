#include<iostream>
using namespace std;
int main()
{
int arr[10],i,n,max,min;
cout<<"enter the size of the array:";
cin>>n;
cout<<"enter the array element:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
max=arr[0];
min=arr[0];
for(i=1;i<n;i++)
{
    if(max<arr[i])
        max=arr[i];
}
for(i=1;i<n;i++)
{
    if(min>arr[i])
        min=arr[i];
}
cout<<"max:"<<max;
cout<<"min:"<<min;
return 0;
}
