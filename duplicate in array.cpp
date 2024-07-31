#include<iostream>
using namespace std;
int main()
{
int a[10],b[10],i,j,n,k=0;
cout<<"enter the size of the array:";
cin>>n;
cout<<"enter the array element:";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<k;j++)
{
if(a[i]==b[j])
break;
}
}
if(j==k)
{
b[k]=a[i];
k++;
}
cout<<"array:";
for(i=0;i<k;i++)
{
cout<<b[i]<<" ";
}
return 0;
}
#include<iostream>
using namespace std;
int main ()
{
    int A[10], B[10], n, i, j, k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << "Repeated elements after deletion : ";
    for (i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;
}
