#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],n,b=0,c[10],k=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i!=j && a[i]==a[j]){
                    b++;
                }
        }
                if(b==0){
            c[k]=a[i];
            k++;
        }
        b=0;
    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<" "<<endl;
    }
    return 0;
}
