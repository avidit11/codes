#include<bits/stdc++.h>
using namespace std;
int binary_ser(int a[],int l,int s,int key){

int mid=(s+l)/2;
 if(l<s){
    return -1;
 }
 if(a[mid]==key){
    return mid;
 }
else if(a[mid]<key){
    return binary_ser(a,l,mid+1,key);
}
else
    return binary_ser(a,mid-1,s,key);

}
int main()
{
 int n ,a[10];
 cin>>n;

 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 cout<<"enter key";
int key;
cin>>key;
 for(int i=1;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
 }
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;

int ab=binary_ser(a,n-1,0,key);
cout<<ab;
 return 0;
}
