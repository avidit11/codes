#include<bits/stdc++.h>
using namespace std;
void reverse1(int arr[],int s,int n){
    int low=s;
    int high=n-1;
   while(low<high){
    swap(arr[low],arr[high]);
    low++;
    high--;
   }
   return;
}
int main()
{int n,k;
int a[10];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>k;
   reverse1(a,0,n-k);
    reverse1(a,n-k,n);
     reverse1(a,0,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0
    ;
}
