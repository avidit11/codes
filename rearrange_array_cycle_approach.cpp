#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n,idx,val,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            if(arr[i]<0) continue;
       else {
        idx=arr[i];
        val=i;
        while(idx!=i){
            temp=arr[idx];
            arr[idx]=-(val+1);
            val=idx;
            idx=temp;
        }
        arr[idx]=-(val+1);
       }
    }
    for(int i=0;i<n;i++){
        arr[i]=(-1 * arr[i])- 1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}

