#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
          int large,ans=0,lt,rt;
        int pmax[n],smax[n];
     large=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<large){
            large=arr[i];
        }
        pmax[i]=large;
    }
    large=arr[n-1];
     for(int i=n-1;i>=0;i--){
        if(arr[i]>large){
            large=arr[i];
        }
        smax[i]=large;
    }
        for(int i=0;i<n-1;i++){
        lt=*min_element(pmax,pmax+i+1);
        rt=*max_element(smax+i+1,smax+n);
        cout<<lt<<" "<<rt<<endl;
        ans=max(ans,rt-lt);
    }
        return ans;
}
