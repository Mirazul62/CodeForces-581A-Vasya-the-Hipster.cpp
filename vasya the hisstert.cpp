#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r=0;
    cin>>a>>b;
    r=abs(a-b)/2;
    if(a>b)
    {
        cout<<b<<" "<<r;
    }
    else if (a<b)
    {
        cout<<a<<" "<<r;
    }
    else
        cout<<a<<" "<<"0";
}
