#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,w="";
    getline(cin,a);
    getline(cin,b);
    string c="";
    for(int i=0;b[i]!=0;i++){
        if(b[i]!='.'){
            w=w+b[i];
        }
        else{
            if(w.size()==a.size()){
                    if((w[0]==a[0] || w[0]==a[0]-32) && w[1]==a[1]  && w[3]==a[3] && w[4]==a[4]){
                        c=c+w;
                        c=c+".";
                    }

                    }
            w="";

        }
    }
    if(c==""){
        cout<<"ERROR-009";
    }
    else{
        c.replace(c.size()-1,1," ");
    for(int i=0;i<c.size();i++){
        if(c[i]>='a' && c[i]<='z'){
            c[i]=c[i]-32;
        }
    }
    cout<<c;
    }
    return 0;
}
