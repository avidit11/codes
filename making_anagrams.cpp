#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int flag=0;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;a[i]!=0;i++){
        for(int j=0;b[j]!=0;j++){
            if(a[i]==b[j]){
                flag++;
            }
        }
    }
    cout<<a.size()+b.size()-(2*flag);
    return 0;
}
