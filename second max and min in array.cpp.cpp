#include<iostream>
using namespace std;
int main()
{
int arr[10],i,j,n,x;
cout<<"enter the size of the array:";
cin>>n;
cout<<"enter the array element:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
x=arr[i];
arr[i]=arr[j];
arr[j]=x;
}
}
}
cout<<"sec max:"<<arr[1];
cout<<"sec min:"<<arr[n-2];
return 0;
}
