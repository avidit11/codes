#include<bits/stdc++.h>
using namespace std;
int main(){
 string a;
 getline(cin,a);
 string w="";
 int x;
 for(int i=0;i<a.size();i++){
 if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
 x=i;
 break;
 }
 }
 for(int i=x;i<a.size();i++){
    w=w+a[i];
 }
 for(int i=0;i<x;i++){
    w=w+a[i];
 }
 cout<<w<<"ay";
 return 0;
}
