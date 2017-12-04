41.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)cout<<"*";
    cout<<endl;
}
2
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,colum;
    cin>>colum>>row;
    for(int i=0; i<colum; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
3.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=i;j++)cout<<"*";
        cout<<endl;
    }
    return 0;
}
4.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=i;j++)cout<<"*";
        cout<<endl;
    }
    return 0;
}

5
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<"*";
        cout<<endl;
    }
    return 0;
}


6.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<"*";
        cout<<endl;
    }
    t=t-1;
    for(int i=t,k=1;i>=1;i--,k++)
    {
        for(int j=1;j<=k;j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<"*";
        cout<<endl;
    }
    return 0;
}

7
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,colum,i,j;
    cin>>row>>colum;
    row=row-2;
    for(i=1;i<=colum;i++)cout<<"*";
    cout<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colum;j++)
        {
            if(j==1||j==colum)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=colum;i++)cout<<"*";
    cout<<endl;
    return 0;
}

8
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k;
    cin>>t;
    cout<<"*"<<endl;
    for(i=2;i<t;i++)
    {
        cout<<"*";
        k=i-2;
        for(j=1;j<=k;j++)cout<<" ";
        cout<<"*"<<endl;
    }
    for(i=1;i<=t;i++)cout<<"*";
    cout<<endl;
    return 0;
}

9
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k;
    cin>>t;
    for(i=1;i<t;i++)cout<<" ";
    cout<<"*"<<endl;
    for(i=2;i<t;i++)
    {
        k=t-i;
        for(j=1;j<=k;j++)cout<<" ";
        k=i-2;
        cout<<"*";
        for(j=1;j<=k;j++)cout<<" ";
        cout<<"*"<<endl;
    }
    for(i=1;i<=t;i++)cout<<"*";
    cout<<endl;
    return 0;
}


10.
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
        if(l<2)cout<<"*"<<endl;
        else
        {
            int m=l-2;
            cout<<"*";
            for(int j=1;j<=m;j++)cout<<" ";
            cout<<"*"<<endl;

        }
    }
    int l=(2*n)-1;
    for(int i=1;i<=l;i++)cout<<"*";
    cout<<endl;
}

11

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
        if(l<2)cout<<"*"<<endl;
        else
        {
            int m=l-2;
            cout<<"*";
            for(int j=1;j<=m;j++)cout<<" ";
            cout<<"*"<<endl;

        }
    }
    n=n-1;
    for(int i=n,k=1;i>=1;i--,k++)
    {
        for(int j=1;j<=k;j++)cout<<" ";
        int l=(2*i)-1;
        if(l<2)cout<<"*"<<endl;
        else
        {
            int m=l-2;
            cout<<"*";
            for(int j=1;j<=m;j++)cout<<" ";
            cout<<"*"<<endl;
        }
    }
    return 0;
}

12
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)cout<<i;
    cout<<endl;
}

13
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,colum;
    cin>>colum>>row;
    for(int i=1; i<=colum; i++)
    {
        for(int j=1; j<=row; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}





