14
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=i;j++)cout<<j;
        cout<<endl;
    }
    return 0;
}


15

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


16

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=i;j++)cout<<j;
        cout<<endl;
    }
    return 0;
}



17
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<j;
        cout<<endl;
    }
    return 0;
}



18
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<j;
        cout<<endl;
    }
    t=t-1;
    for(int i=t,k=1;i>=1;i--,k++)
    {
        for(int j=1;j<=k;j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<j;
        cout<<endl;
    }
    return 0;
}



19
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,colum,i,j;
    cin>>row>>colum;
    row=row-2;
    for(i=1;i<=colum;i++)cout<<i;
    cout<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colum;j++)
        {
            if(j==1||j==colum)cout<<j;
            else cout<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=colum;i++)cout<<i;
    cout<<endl;
    return 0;
}

20
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l;
    cin>>t;
    cout<<1<<endl;
    for(i=2,l=2;i<t;i++,l++)
    {
        cout<<1;
        k=i-2;
        for(j=1;j<=k;j++)cout<<" ";
        cout<<l<<endl;
    }
    for(i=1;i<=t;i++)cout<<i;
    cout<<endl;
    return 0;
}

21
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l;
    cin>>t;
    for(i=1;i<t;i++)cout<<" ";
    cout<<t<<endl;
    for(i=2;i<t;i++)
    {
        k=t-i;
        l=k;
        for(j=1;j<=k;j++)cout<<" ";
        k=i-2;
        cout<<l+1;
        for(j=1;j<=k;j++)cout<<" ";
        cout<<t<<endl;
    }
    for(i=1;i<=t;i++)cout<<i;
    cout<<endl;
    return 0;
}


22
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int k=n-i;
        for(int j=1;j<=k;j++)cout<<" ";
        int l=(2*i)-1;
        if(l<2)cout<<1<<endl;
        else
        {
            int m=l-2;
            cout<<1;
            for(int j=1;j<=m;j++)cout<<" ";
            cout<<l<<endl;

        }
    }
    int l=(2*n)-1;
    for(int i=1;i<=l;i++)cout<<i;
    cout<<endl;
}

23

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        k=n-i;
        for(int j=1;j<=k;j++)cout<<" ";
        int l=(2*i)-1;
        if(l<2)cout<<1<<endl;
        else
        {
            int m=l-2;
            cout<<1;
            for(int j=1;j<=m;j++)cout<<" ";
            cout<<l<<endl;

        }
    }
    n=n-1;
    for(int i=n,k=1;i>=1;i--,k++)
    {
        for(int j=1;j<=k;j++)cout<<" ";
        int l=(2*i)-1;
        if(l<2)cout<<1<<endl;
        else
        {
            int m=l-2;
            cout<<1;
            for(int j=1;j<=m;j++)cout<<" ";
            cout<<l<<endl;
        }
    }
    return 0;
}

24
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)cout<<i;
    t=t-1;
    for(i=t;i>=1;i--)cout<<i;
    cout<<endl;
}
25

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        int m=(2*i)-1;
        int k=ceil(m/2);
        for(int j =1;j<=k;j++)cout<<j;
        k=k-1;
        for(int j=k;j>=1;j--)cout<<j;
        cout<<endl;
    }
}


