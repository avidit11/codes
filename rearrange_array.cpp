#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n,old_value;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        old_value=arr[i]%n;
        arr[old_value]=(i*n)+arr[old_value];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/n;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
