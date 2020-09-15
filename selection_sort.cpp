#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
            int small=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[small]){
                small=j;
            }
        }
        swap(a[i],a[small]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
