//WAP to accept a sentence and display the words having length is greater than 5
 #include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    s1=s1+" ";
    string w="";
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=' ')
            w=w+s1[i];
        else{
            if(w.size()>5){
                cout<<w<<" ";
                w="";
            }
        }
    }
    return 0;
}

