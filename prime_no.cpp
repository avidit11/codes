#include<iostream>
using namespace std;
int main(){

 int n,mid,count1;
 cin>>n;
 int a[n];
 cout<<"Please enter a sorted array";
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int i=n-1;i>=0;i--){
   mid=a[i]/2;
   for(int j=2;j<=mid;j++){
    if(a[i]%j==0){
        count1=1;
        break;
    }
   }
   if(count1==0){
    cout<<a[i];
    break;
   }
 }
    return 0;
}
