//WAP to accept a sentence and extract the palindrome words.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    s1=s1+" ";
    string w="";
    int flag=0;
    for(int i=0;i<=s1.size();i++){
        if(s1[i]!=' ')
            w=w+s1[i];
        else{
            for(int j=0;j<(w.size())/2;j++){
                if(w[j]!=w[w.size()-j-1]){
                  flag++;
                  break;
                }
            }
            if(flag){
                    w="";
                    flag= 0;
            }
            else{
                cout<<w<<" ";
                w="";
                flag = 0;
            }

        }
    }
    return 0;
}
