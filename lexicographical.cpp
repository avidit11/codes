#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(s1>s2){
        cout<<s1<<endl;
    }
    else if(s2>s1){
        cout<<s2<<endl;
    }
    else
        cout<<"how appropriate"<<endl;

            return 0;
}
