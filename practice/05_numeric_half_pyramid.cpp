// Input:

// 4
// Output:

// 1
// 12
// 123
// 1234
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}