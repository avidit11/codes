#include<bits/stdc++.h>
using namespace std;
int main()
{int n,large;
int a[n],pmax[n];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
large=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
        pmax[i]=large;
    }
    large=0;
    for(int i=0;i<n;i++){
        if(pmax[i]==i){
            large++;
        }
    }
    return large;
}
