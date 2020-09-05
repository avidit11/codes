#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int count=0;
    a=a+" ";
    string w="";
    for(int i=0;a[i]!=0;i++){
        if(a[i]!=' '){
           w=w+a[i];
        }
        else{
            count=count+w.size();
        w="";
        }
    }
    int x=0;
    while(count!=0){
        x=x+count%10;
        count=count/10;
    }
    cout<<x;
    return 0;
}
