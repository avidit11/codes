#include<bits/stdc++.h>
using namespace std;
/*int fact(int n){
    if(n==0) return 1;
    else
        return n*fact(n-1);
}*/
string permutation(string a,int l,int h){
    if(l==h){
        return a;
    }
    else{
        for(int i=l;i<=h;i++){
            swap(a[l],a[i]);
            permutation(a,l+1,h);
            swap(a[l],a[i]);
        }
    }
}
int main(){
    string a1,a2;
    getline(cin,a1);
    getline(cin,a2);
    int a=min(a1.size(),a2.size());
    if(a1.size()>a2.size()){
        permutation(a2,0,a-1);
    }
    permutation(a1,0,a-1);
        return 0;
}
