//WAP to replace “15 august” with “26 january” and  “independence” with “republic” in the string “15 august is independence day” 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="15 August is Independence Day ";
    string w="";
    int j=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=' '){
            w=w+a[i];
        }
        else{
            if(w=="15"){
                a.replace(j,w.size(),"26");
            }
            else if(w=="August"){
                a.replace(j,w.size(),"January");
            }
            else if(w=="Independence"){
                a.replace(j,w.size(),"Republic ");
            }
            w="";
            j=i+1;

        }
    }
    cout<<a;
return 0;
}
