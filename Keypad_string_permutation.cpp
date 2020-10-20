#include <bits/stdc++.h>
using namespace std;
vector<string> a={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void kp(string& digit,vector<string>& ans,string& st){
    if(digit.length()==0){
        ans.push_back(st);
        return;
    }
    char c=digit[0];
    int value=c-'0';
    string rest=digit.substr(1,digit.size());
    string alpha=a[value-2];
        for(int i=0;i<alpha.size();i++){
        st.push_back(alpha[i]);
        kp(rest,ans,st);
        st.pop_back();
    }
}
int main() {
    vector<string> ans;
    string digit,st;
    cin>>digit;
    kp(digit,ans,st);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    return 0;
}


