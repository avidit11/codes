#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],n,a,b=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the no to be searched"<<endl;
    cin>>a;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            b++;
        }
    }
    if(b!=0){
        cout<<"element found "<<b<<" times"<<endl;
    }
    else
        cout<<"element not found";

    return 0;
}
