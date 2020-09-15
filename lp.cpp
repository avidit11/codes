#include<bits/stdc++.h>
using namespace std;
#define int long long int
int max_ar(int a[100],int s, int l){
    int large=a[s];
    for(int i=s;i<=l;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    return large;
}
int main()
{
    int p,q,r,n,lt,rt,ans=0;
    int arr[100],pmax[100],smax[100];
    //cout<<"enter p,q,r and n";
    cin>>n>>p>>q>>r;
    //cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
        pmax[i]=large*p;
    }
    large=arr[n-1];
     for(int i=n-1;i>=0;i--){
        if(arr[i]>large){
            large=arr[i];
        }
        smax[i]=large*r;
    }
    for(int i=1;i<n-1;i++){
        lt=max_ar(pmax,0,i);
        rt=max_ar(smax,i,n-1);
        ans=max(ans,lt+rt+(arr[i]*q));
    }
    return ans;
}
