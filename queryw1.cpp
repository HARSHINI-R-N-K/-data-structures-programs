#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr1[5][20] = {"aa", "bb", "cc", "aa", "cc"};
    char arr2[4][20] = {"aa", "bb", "cc", "dd"};
    int i, j;
    for(i=0; i<4; i++)
    {
        int c = 0;
        for(j=0; j<5; j++)
        {
            if (strcmp(arr2[i], arr1[j]) == 0)
            {
                c++;
            }
        }
        cout<<c<<" ";
    }
    return 0;
}
