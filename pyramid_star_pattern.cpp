#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=((2*i)-1);j++){
            if(j%2==0){
                cout<<" ";
            }
            else{
                cout<<k;
                k++;
            }
        }
        cout<<endl;
        k=1;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=((2*i)-1);j>=1;j--){
            if(j%2==0){
                cout<<" ";
            }
            else{
                cout<<k;
                k++;
            }
        }
        cout<<endl;
        k=1;
    }

  return 0;
}
