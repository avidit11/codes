#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    int a[10][10];
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        ans+=((i+1)*(n-i)*a[i][j]*(j+1)*(n-j));
    }
}
cout<<ans;
    return 0;
}
