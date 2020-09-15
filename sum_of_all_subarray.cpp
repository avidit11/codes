#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int a[10];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    ans+=((i+1)*(n-i)*a[i]);
}
cout<<ans;
    return 0;
}
