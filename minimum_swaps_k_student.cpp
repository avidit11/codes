#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
int n,k,flag=0,count1=0;
int a[50];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>k;
 for(int i=0;i<n;i++){
    if(a[i]<=k){
    flag++;
    }
 }
for(int i=0;i<flag;i++){
    if(a[i]<=k){
        count1++;
    }
}
int i=flag;
int j=0;
int l=count1;
while(i!=n-1){
    if(a[j]<=k && a[i]>k){
        l--;
    }
    else if(a[j]>k && a[i]<=k){
        l++;
    }
    if(l>count1){
        count1=l;
    }
    i++;
    j++;
}
cout<<flag-count1;
}
	return 0;
}
