
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=i;j++)cout<<(t-i)+j;
        cout<<endl;
    }
    return 0;
}

