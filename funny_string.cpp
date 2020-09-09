#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100],b[100];
    cin>>a;
    int k=0;
    int i=strlen(a)-1;
    while(i>=0){
        b[k]=a[i];
        k++;
        i--;
    }
    k=0;
    int ar[10],br[10];
    for(int i=1;a[i]!=0;i++){
         ar[k]=a[i]-a[i-1];
        br[k]=(b[i]-b[i-1]);
        if(ar[k]<0){
            ar[k]=-ar[k];
        }
        if(br[k]<0){
            br[k]=-br[k];
        }
        k++;
    }
    k=0;
    for(int i=0;i<strlen(a)-1;i++){
        if(ar[i]!=br[i]){
        k++;
        break;
        }
    }
    if(k==0){
        cout<<"funny";
    }
    else
        cout<<"not funny";
    return 0;
}
