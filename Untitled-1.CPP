#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define ui unsigned int
int main()

{
ios_base ::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

list <int> list1;
list <int>:: iterator it;
for (int i=0;i<4;i++)
{
    list1.push_back(i);
}
it=list1.begin();
cout<<*it;
return 0;
}