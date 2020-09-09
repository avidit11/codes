#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100];
    int n,l1,l2;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    l1=a[0];
    l2=a[0];
    for(int i=0;i<n;i++){
      if(a[i]>l1){
        l1=a[i];
      }
    }
    for(int i=0;i<n;i++){
        if(a[i]>l2 && a[i]<l1){
            l2=a[i];
        }
    }
    cout<<l2;
    return 0;
}
