#include<bits/stdc++.h>
using namespace std;
int first(int temp[],int l,int h,int x,int n){
    if(h>=l){
        int mid=l+((h-l)/2);
        if((mid==0 || x>temp[mid-1]) && temp[mid]==x){
            return mid;
        }
        if(x>temp[mid]) return first(temp,(mid+1),h,x,n);
        return first(temp,l,mid-1,x,n);
    }
    return -1;
}
void SortA(int a[],int b[],int m,int n){
  int temp[m],temp2[m];
  for(int i=0;i<m;i++){
    temp[i]=a[i];
    temp2[i]=0;
  }
  sort(temp,temp+m);
  int idx=0;
  for(int i=0;i<n;i++){
    int f=first(temp,0,m-1,b[i],m);
    if(f==-1) continue;
    for(int j=f;(j<m && temp[j]==b[i]);j++){
        a[idx++]=temp[j];
        temp2[j]=1;
    }
  }
  for(int i=0;i<m;i++){
    if(temp2[i]==0){
        a[idx++]=temp[i];
    }
  }
}
int main(){
    int m,n;
    int a[100],b[100];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    SortA(a,b,m,n);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
