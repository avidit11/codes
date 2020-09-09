#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    b="hackerrank";
    getline(cin,a);
    int j=0;
    for(int i=0;a[i]!=0;i++){
        if(a[i]==b[j]){
            j++;
        }
    }
    if(j==b.size()){
        cout<<"yes";
    }
    else
        cout<<"no";
    return 0;
}
