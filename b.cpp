#include <bits/stdc++.h>
using namespace std;
int main()

{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a, b;
    cin>>a>>b;
    if (a == 1)
    {
        a = 0;
    }
    else
    {
        a = a - 1;
    }
    if (b == 1)
    {
        b = 0;
    }
    else
    {
        b = b - 1;
    }
    cout << a + b;
        return 0;
}