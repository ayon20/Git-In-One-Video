#include <bits/stdc++.h>
using namespace std;
int main()

{
ios_base ::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int p;
cin>>p;
for (int i=1;i<=p;i++)
{
    int u=p-i;
    for (int j=1;j<=p;j++)
    {
        if (u>=j)
        {
        cout<<" ";
        }
        else
        {
            cout<<"#";
        }
    }
    cout<<endl;
}
return 0;
}