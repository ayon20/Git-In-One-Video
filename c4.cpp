#include <bits/stdc++.h>
using namespace std;
int main()

{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned int  a, b;
    cin >> b >> a;
    if (a==0 || b==0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout <<(2*a+b-1)/b<< endl;
    return 0;
}