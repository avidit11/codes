#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how many elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start=0;
    int last=n-1;
    while(start<last){
            swap(a[start],a[last]);
            start++;
            last--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
return 0;
}
