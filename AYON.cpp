#include <bits/stdc++.h>
using namespace std;
int main()

{
ios_base ::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

long long int x1,v1,x2,v2;
cin>>x1>>v1>>x2>>v2;
if (v2>=v1)
{
    cout<<"NO"<<endl;
    return 0;
}
else 
{
    while (1)
    {
      //  cout<<x1<<endl;
        if (x1==x2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if (x1>x2)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        x1=x1+v1;
        x2=x2+v2;
    }
}
return 0;
}